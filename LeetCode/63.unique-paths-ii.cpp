/*
 * @lc app=leetcode id=63 lang=cpp
 *
 * [63] Unique Paths II
 */

// @lc code=start
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>> matrix = obstacleGrid;
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>> dp(m, vector<int> (n, 0));

        if(matrix[0][0] == 1)
            return 0;

        dp[0][0] = 1;

        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(matrix[i][j] == 1)
                    dp[i][j] = 0;
                else if(i == 0 && j == 0)
                    dp[i][j] = 1;
                else {
                    int up = 0, left = 0;
                    if(i > 0)
                        up = dp[i-1][j];
                    if(j > 0)
                        left = dp[i][j-1];
                    dp[i][j] = up + left;
                }
            }
        }
        return dp[m-1][n-1];
    }
};
// @lc code=end

