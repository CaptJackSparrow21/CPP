/*
 * @lc app=leetcode id=1277 lang=cpp
 *
 * [1277] Count Square Submatrices with All Ones
 */

// @lc code=start
class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>> dp(n, vector<int> (m));
        int ans = 0;

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(matrix[i][j] == 1) {
                    if(i == 0 || j == 0)
                        dp[i][j] = 1;
                    else 
                        dp[i][j] = 1 + min({
                            dp[i][j-1],
                            dp[i-1][j],
                            dp[i-1][j-1]
                        });

                    ans += dp[i][j];
                }
            }
        }
        return ans;
    }
};
// @lc code=end

