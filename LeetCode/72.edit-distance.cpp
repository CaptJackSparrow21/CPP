/*
 * @lc app=leetcode id=72 lang=cpp
 *
 * [72] Edit Distance
 */

// @lc code=start
class Solution {
public:
    int minDistance(string word1, string word2) {
        string start = word1, target = word2;
        int n = start.size(), m = target.size();

        vector<vector<int>> dp(n+1, vector<int> (m+1, 0));
        for(int i=0; i<=n; i++)
            dp[i][0] = i;
        for(int j=0; j<=m; j++)
            dp[0][j] = j;

        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                if(start[i-1] == target[j-1])
                    dp[i][j] = dp[i-1][j-1];
                else 
                    dp[i][j] = 1 + 
                                min({dp[i-1][j],
                                    dp[i][j-1],
                                    dp[i-1][j-1]});
            }
        }
        return dp[n][m];
    }
};
// @lc code=end

