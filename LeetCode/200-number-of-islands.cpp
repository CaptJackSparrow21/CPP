class Solution {
public:
    void dfs(int r, int c, vector<vector<char>> &grid,
             vector<vector<int>> &vis) {
        int n = grid.size(), m = grid[0].size();
        vis[r][c] = 1;

        for(int dr = -1; dr <= 1; dr++) {
            for(int dc = -1; dc <= 1; dc++) {
                if(dr == 0 && dc == 0) continue;

                int nr = r + dr;
                int nc = c + dc;

                if(nr >= 0 && nr < n && nc >= 0 && nc < m
                   && grid[nr][nc] == '1' && !vis[nr][nc])
                        dfs(nr, nc, grid, vis);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> vis(n, vector<int> (m, 0));
        int cnt = 0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == '1' && !vis[i][j]) {
                    cnt++;
                    dfs(i, j, grid, vis);
                }
            }
        }
        return cnt;
    }
};