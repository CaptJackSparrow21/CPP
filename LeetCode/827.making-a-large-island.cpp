/*
 * @lc app=leetcode id=827 lang=cpp
 *
 * [827] Making A Large Island
 */

// @lc code=start
class Solution {
public:
    int dr[4] = {-1, 1, 0, 0};
    int dc[4] = {0, 0, -1, 1};
    int n;

    int dfs(int r, int c, int id, vector<vector<int>> &grid) {
        grid[r][c] = id;
        int size = 1;

        for(int k=0; k<4; k++) {
            int nr = r + dr[k];
            int nc = c + dc[k];

            if(nr >= 0 && nr < n && nc >= 0 && nc < n
                && grid[nr][nc] == 1) {
                    size += dfs(nr, nc, id, grid);
            }
        }
        return size;
    }

    int largestIsland(vector<vector<int>>& grid) {
        n = grid.size();
        vector<int> islandSize;
        int id = 2;

        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j] == 1) {
                    int size = dfs(i, j, id, grid);
                    islandSize.push_back(size);
                    id++;
                }
            }
        }

        if(islandSize.size() == 0)
            return 1;

        int ans = 0;

        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j] == 0) {
                    set<int> st;
                    for(int k=0; k<4; k++) {
                        int nr = i + dr[k];
                        int nc = j + dc[k];

                        if(nr >= 0 && nr < n &&
                           nc >= 0 && nc < n &&
                           grid[nr][nc] > 1) {
                            st.insert(grid[nr][nc]);
                        }
                    }
                    int size = 1;
                    for(int island_id : st)
                        size += islandSize[island_id - 2];
                    
                    ans = max(ans, size);
                }
            }
        }
        for(int x : islandSize)
            ans = max(ans, x);

        return ans;
    }
};
// @lc code=end

