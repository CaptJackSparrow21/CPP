/*
 * @lc app=leetcode id=518 lang=cpp
 *
 * [518] Coin Change II
 */

// @lc code=start
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        const long long inf = INT_MAX;
        vector<long long> dp(amount + 1, 0);
        dp[0] = 1;
        for(int i=0; i<n; i++) 
            for(int sum=coins[i]; sum<=amount; sum++)
                dp[sum] = min(inf, dp[sum] + dp[sum - coins[i]]);

        return (int)dp[amount];
    }
};
// @lc code=end

