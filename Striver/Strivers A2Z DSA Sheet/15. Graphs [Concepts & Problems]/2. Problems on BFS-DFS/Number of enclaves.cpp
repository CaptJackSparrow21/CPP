//https://takeuforward.org/plus/dsa/problems/number-of-enclaves?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = SC = O(n * m)
class Solution {
public:
    void dfs(int r, int c, vector<vector<int>> &grid,
                vector<vector<int>> &vis) {
        int n = grid.size();
        int m = grid[0].size();

        vis[r][c] = 1;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        for(int k=0; k<4; k++) {
            int nr = r + dr[k];
            int nc = c + dc[k];

            if(nr >= 0 && nr < n && nc >= 0 && nc < m
                && grid[nr][nc] == 1 &&!vis[nr][nc])
                dfs(nr, nc, grid, vis);
        }
    }

    int numberOfEnclaves(vector<vector<int>> &grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> vis(n, vector<int> (m, 0));

        //first and last column
        for(int i=0; i<n; i++) {
            if(grid[i][0] == 1 && !vis[i][0])
                dfs(i, 0, grid, vis);

            if(grid[i][m-1] == 1 && !vis[i][m-1])
                dfs(i, m-1, grid, vis);
        }

        //first and last row
        for(int j=0; j<m; j++) {
            if(grid[0][j] == 1 && !vis[0][j])
                dfs(0, j, grid, vis);

            if(grid[n-1][j] == 1 && !vis[n-1][j])
                dfs(n-1, j, grid, vis);
        }

        int cnt = 0;

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == 1 &&  !vis[i][j])
                    cnt++;
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

    vector<vector<int>> grid;
    vector<int> curr_row;
    string temp = "";

    for(char c : s) {
        if(c >= '0' && c <= '9')
            temp += c;

        if((c == ',' || c == ']') && !temp.empty()) {
            curr_row.push_back(stoi(temp));
            temp = "";

            if(c == ']') {
                grid.push_back(curr_row);
                curr_row.clear();
            }
        }
    }

    Solution sol;
    cout << sol.numberOfEnclaves(grid);

    return 0;
}