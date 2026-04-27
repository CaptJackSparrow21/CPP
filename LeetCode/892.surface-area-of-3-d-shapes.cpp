/*
 * @lc app=leetcode id=892 lang=cpp
 *
 * [892] Surface Area of 3D Shapes
 */

// @lc code=start
class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int n = grid.size(), ans = 0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                int v = grid[i][j];
                if(v > 0)
                    ans += (6 * v) - (2 * (v-1));
                if(i > 0)
                    ans -= 2 * min(v, grid[i-1][j]);  //top neighbor
                if(j > 0)
                    ans -= 2 * min(v, grid[i][j-1]); //left neighbor
            }
        }
        return ans;
    }
};
// @lc code=end

