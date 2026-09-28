/*
 * @lc app=leetcode id=1043 lang=cpp
 *
 * [1043] Partition Array for Maximum Sum
 */

// @lc code=start
class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n = arr.size();

        vector<int> dp(n+1, 0);

        for(int i=1; i<=n; i++) {
            int mx = 0;
            for(int len=1; len<=k && len<=i; len++) {
                mx = max(mx, arr[i - len]);
                dp[i] = max(dp[i], dp[i-len] + mx * len);
            }
        }
        return dp[n];
    }
};
// @lc code=end

