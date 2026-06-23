//https://takeuforward.org/plus/dsa/problems/surrounded-regions?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = SC = O(n * m)
class Solution {
public:
    void dfs(int r, int c, 
             vector<vector<char>> &mat,
             vector<vector<int>> &vis) {
        int n = mat.size();
        int m = mat[0].size();

        vis[r][c] = 1;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        for(int k=0; k<4; k++) {
            int nr = r + dr[k];
            int nc = c + dc[k];

            if(nr >= 0 && nr < n && nc >= 0 && nc < m
               && !vis[nr][nc] && mat[nr][nc] == 'O')
                dfs(nr, nc, mat, vis);
        }
    }

    vector<vector<char>> fill(vector<vector<char>> mat) {
        int n = mat.size();
        int m = mat[0].size();

        vector<vector<int>> vis(n, vector<int> (m, 0));

        //first row
        for(int j=0; j<m; j++) {
            if(mat[0][j] == 'O' && !vis[0][j])
                dfs(0, j, mat, vis);
        }

        //last row
        for(int j=0; j<m; j++) {
            if(mat[n-1][j] == 'O' && !vis[n-1][j])
                dfs(n-1, j, mat, vis);
        }

        //first column
        for(int i=0; i<n; i++) {
            if(mat[i][0] == 'O' && !vis[i][0])
                dfs(i, 0, mat, vis);
        }

        //last column
        for(int i=0; i<n; i++) {
            if(mat[i][m-1] == 'O' && !vis[i][m-1])
                dfs(i, m-1, mat, vis);
        }

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(mat[i][j] == 'O' &&  !vis[i][j]) 
                    mat[i][j] = 'X';
            }
        }
        return mat;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    vector<vector<char>> mat;
    vector<char> curr_row;

    for(char c : s) {
        if(c == 'O' || c == 'X')
            curr_row.push_back(c);

            if(c == ']') {
                if(!curr_row.empty()) {
                    mat.push_back(curr_row);
                    curr_row.clear();
                }
            }
        }

    Solution sol;
    vector<vector<char>> ans = sol.fill(mat);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << "[";
        for(int j=0; j<ans[0].size(); j++) {
            cout << "\"" << ans[i][j] << "\"";
            if(j+1 != ans[0].size())
                cout << ",";
        }
        cout << "]";
        if(i+1 != ans.size())    
            cout << ",";
    }
    cout << "]";


    return 0;
}