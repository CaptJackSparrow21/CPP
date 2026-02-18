//https://takeuforward.org/plus/dsa/problems/rat-in-a-maze

#include<bits/stdc++.h>
using namespace std;

//TC = O(4 ^ (n*n)) && SC = O(n*n)
class Solution {
public: 
    void solve(int i, int j, vector<vector<int>> &grid, int n,
        vector<vector<bool>> &visited, string path, vector<string> &ans) {
            if(i == n-1 && j == n-1) {
                ans.push_back(path);
                return;
            }

            string dirs = "DLRU";
            int di[] = {1, 0, 0, -1};     //di + dj = row+column
            int dj[] = {0, -1, 1, 0};     //combination for DLRU
            visited[i][j] = true;
            for(int k=0; k<4; k++) {
                int ni = i + di[k];
                int nj = j + dj[k];
                if(ni >= 0 && nj >= 0 && ni<n && nj<n && 
                    !visited[ni][nj] && grid[ni][nj] == 1) {
                    solve(ni, nj, grid, n, visited, path + dirs[k], ans);        
                }
            }
            visited[i][j] = false;
        }

    vector<string> findPath(vector<vector<int>> &grid) {
        int n = grid.size();
        vector<vector<bool>> visited(n, vector<bool> (n, false));
        vector<string> ans;

        if(grid[0][0] == 1)
            solve(0, 0, grid, n, visited, "", ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<vector<int>> grid(n, vector<int>(n));
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> grid[i][j];

    Solution sol;
    vector<string> ans = sol.findPath(grid);
    
    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << "\"" << ans[i] << "\"";
        cout << ((i+1) == ans.size() ? "" : ",");
    }
    cout << "]";

    return 0;
}