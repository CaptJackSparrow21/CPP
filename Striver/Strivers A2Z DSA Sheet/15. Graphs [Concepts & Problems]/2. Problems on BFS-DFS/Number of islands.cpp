//https://takeuforward.org/plus/dsa/problems/number-of-islands?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = SC = O(n * m)
class Solution {
public:
    void dfs(int r, int c, vector<vector<char>> &grid,
             vector<vector<int>> &vis) {
        vis[r][c] = 1;
        int n = grid.size(), m = grid[0].size();
        for(int dr = -1; dr <= 1; dr++) {
            for(int dc = -1; dc <= 1; dc++) {
                int nr = r + dr;
                int nc = c + dc;

                if(dr == 0 && dc == 0) continue;

                if(nr >= 0 && nr < n && nc >= 0 && nc < m &&
                   !vis[nr][nc] && grid[nr][nc] == '1')
                        dfs(nr, nc, grid, vis);
            }
        } 
    } 

    int numIslands(vector<vector<char>> &grid) {
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

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);

    vector<vector<char>> grid;
    vector<char> row;

    for(char ch : s) {
        if(ch == '0' || ch == '1')
            row.push_back(ch);

        if(ch == ']' && !row.empty()) {
            grid.push_back(row);
            row.clear();
        }
    }

    Solution sol;
    cout << sol.numIslands(grid);

    return 0;
}