/*
 * @lc app=leetcode id=931 lang=cpp
 *
 * [931] Minimum Falling Path Sum
 */

// @lc code=start
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> prev = matrix[0];

        for(int i=1; i<n; i++) {
            vector<int> curr(m);
            for(int j=0; j<m; j++) {
                int best = prev[j];

                if(j > 0)
                    best = min(best, prev[j-1]);

                if(j + 1 < m)   
                    best = min(best, prev[j+1]);

                curr[j] = matrix[i][j] + best;
            }
            prev = curr;
        }
        return *min_element(prev.begin(), prev.end());
    }
};
// @lc code=end

