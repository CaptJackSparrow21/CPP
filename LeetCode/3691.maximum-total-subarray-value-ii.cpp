/*
 * @lc app=leetcode id=3691 lang=cpp
 *
 * [3691] Maximum Total Subarray Value II
 */

// @lc code=start
class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        if(nums.size() == 1)
            return 0;
        else if(nums.size() == 2)
            return abs(nums[1] - nums[0]);

        long long x = *max_element(nums.begin(), nums.end());
        long long y = *min_element(nums.begin(), nums.end());

        return 1LL * k * abs(x-y);
    }
};
// @lc code=end

