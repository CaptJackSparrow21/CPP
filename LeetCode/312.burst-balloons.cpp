/*
 * @lc app=leetcode id=312 lang=cpp
 *
 * [312] Burst Balloons
 */

// @lc code=start
class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n = nums.size();
        nums.insert(nums.begin(), 1);
        nums.push_back(1);

        vector<vector<int>> dp(n+2, vector<int> (n+2, 0));

        for(int len=2; len<n+2; len++) {
            for(int l=0; l+len<n+2; l++) {
                int r = l + len;

                for(int k=l+1; k<r; k++) {
                    dp[l][r] = max(dp[l][r],
                            dp[l][k] + dp[k][r] +
                            nums[l] * nums[k] * nums[r]);
                }
            }
        }
        return dp[0][n+1];
    }
};
// @lc code=end

