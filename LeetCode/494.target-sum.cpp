/*
 * @lc app=leetcode id=494 lang=cpp
 *
 * [494] Target Sum
 */

// @lc code=start
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(sum + target < 0 || (sum + target) % 2)
            return 0;

        int need = (sum + target) / 2;
        vector<int> dp(need + 1);
        dp[0] = 1;

        for(int x : nums) {
            for(int j=need; j>=x; j--)
                dp[j] = dp[j] + dp[j-x];
        }
        return dp[need];
    }
};
// @lc code=end

