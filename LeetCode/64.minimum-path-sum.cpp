/*
 * @lc app=leetcode id=64 lang=cpp
 *
 * [64] Minimum Path Sum
 */

// @lc code=start
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<int> dp(m, INT_MAX);
        dp[0] = 0;

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(j > 0)
                    dp[j] = min(dp[j], dp[j-1]);

                dp[j] += grid[i][j];
            }
        }
        return dp[m-1];
    }
};
// @lc code=end

