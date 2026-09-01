/*
 * @lc app=leetcode id=213 lang=cpp
 *
 * [213] House Robber II
 */

// @lc code=start
class Solution {
public:
    int fun(vector<int> &nums, int l, int r) {
        int prev1 = 0, prev2 = 0;

        for(int i=l; i<=r; i++) {
            int curr = max(prev1, prev2 + nums[i]);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n == 1)
            return nums[0];

        return max(fun(nums, 1, n-1), fun(nums, 0, n-2));
    }
};
// @lc code=end

