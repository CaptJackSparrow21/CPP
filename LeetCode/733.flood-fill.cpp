/*
 * @lc app=leetcode id=733 lang=cpp
 *
 * [733] Flood Fill
 */

// @lc code=start
class Solution {
public:
    void dfs(int r, int c, vector<vector<int>> &image,
                int oldColor, int newColor) {
        int n = image.size();
        int m = image[0].size();

        image[r][c] = newColor;
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        for(int k=0; k<4; k++) {
            int nr = r + dr[k];
            int nc = c + dc[k];
            if(nr >= 0 && nr < n && nc >= 0 && nc < m 
                && image[nr][nc] == oldColor) {
                dfs(nr,nc, image, oldColor, newColor);
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldColor = image[sr][sc];
        int newColor = color;
        if(oldColor == newColor)
            return image;

        dfs(sr, sc, image, oldColor, newColor);
        return image;
    }
};
// @lc code=end

