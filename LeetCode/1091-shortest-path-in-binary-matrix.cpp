class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();

        if(grid[0][0] == 1 || grid[n-1][n-1] == 1)
            return -1;

        if(n == 1)
            return 1;

        vector<vector<int>> dist(n, vector<int> (n, 1e9));

        queue<pair<int, int>> q;

        dist[0][0] = 1;
        q.push({0, 0});

        while(!q.empty()) {
            auto [r, c] = q.front();
            q.pop();

            for(int dr = -1; dr <= 1; dr++) {
                for(int dc = -1; dc <= 1; dc++) {
                    if(dr == 0 && dc == 0)
                       continue;

                    int nr = r + dr;
                    int nc = c + dc;

                    if(nr >= 0 && nr < n && nc >= 0 && nc < n
                      && grid[nr][nc] == 0 && 
                      dist[r][c] + 1 < dist[nr][nc]) {
                        dist[nr][nc] = dist[r][c] + 1;

                        if(nr == n-1 && nc == n-1)
                            return dist[nr][nc];

                        q.push({nr, nc});
                    }
                }
            }
        }
        return -1;
    }
};