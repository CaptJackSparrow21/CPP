class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        pair<int, int> source = {0, 0};
        pair<int, int> destination = {n-1, n-1};

        if(source == destination)
            return 0;

        vector<vector<int>> dist(n, vector<int> (m, 1e9));
        queue<pair<int, pair<int, int>>> q;
        dist[source.first][source.second] = 0;
        q.push({0, {source.first, source.second}});

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        while(!q.empty()) {
            auto it = q.front();
            q.pop();

            int d = it.first;
            int r = it.second.first;
            int c = it.second.second;

            for(int k=0; k<3; k++) {
                int nr = r + dr[k];
                int nc = c + dc[k];

                if(nr >= 0 && nr < n && nc >= 0 && nc < m
                   && grid[nr][nc] == 1 && d + 1 < dist[nr][nc]) {
                    dist[nr][nc] =  d + 1;

                    if(nr == destination.first && nc == destination.second)
                        return d + 1;

                    q.push({d + 1, {nr, nc}});
                }
            }
        }
        return -1;
    }
};