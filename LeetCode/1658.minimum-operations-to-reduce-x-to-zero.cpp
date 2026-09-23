/*
 * @lc app=leetcode id=1658 lang=cpp
 *
 * [1658] Minimum Operations to Reduce X to Zero
 */

// @lc code=start
class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int total = accumulate(nums.begin(), nums.end(), 0);
        int target = total - x;

        if(target < 0)
            return -1;

        if(target == 0)
            return n;

        int left = 0, sum = 0, longest = -1;

        for(int right=0; right<n; right++) {
            sum += nums[right];
            while(left <= right && sum > target)
                sum -= nums[left++];
            if(sum == target)
                longest = max(longest, right - left + 1);
        }
        return longest == -1 ? -1 : n - longest;
    }
};
// @lc code=end

