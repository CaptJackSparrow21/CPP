/*
 * @lc app=leetcode id=1547 lang=cpp
 *
 * [1547] Minimum Cost to Cut a Stick
 */

// @lc code=start
class Solution {
public:
    int minCost(int n, vector<int>& cuts) {
        cuts.push_back(0);
        cuts.push_back(n);
        sort(cuts.begin(), cuts.end());

        int m = cuts.size();

        vector<vector<int>> dp(m, vector<int> (m, 0));

        for(int len=2; len<m; len++) {
            for(int i=0; i+len<m; i++) {
                int j = i + len;
                dp[i][j] = INT_MAX;

                for(int k=i+1; k<j; k++) {
                    int cost = cuts[j] - cuts[i] +
                                dp[i][k] + dp[k][j];

                    dp[i][j] = min(dp[i][j], cost);
                }
            }
        }
        return dp[0][m-1];
    }
};
// @lc code=end

