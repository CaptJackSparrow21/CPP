//https://takeuforward.org/plus/dsa/problems/making-a-large-island?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

class Solution {
public:
    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    int dfs(int r, int c, int id, 
            vector<vector<int>> &grid) {
        grid[r][c] = id;
        int size = 1;

        for(int k=0; k<4; k++) {
            int nr = r + dr[k];
            int nc = c + dc[k];

            if(nr >= 0 && nr < n && nc >= 0 && nc < n
                && grid[nr][nc] == )
        }
    }

    int largestIsland(vector<vector<int>> &grid) {

    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    
    vector<vector<int>> grid;
    vector<int> row;
    string temp = "";
    for(char c : s) {
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoll(temp));
            temp = "";

            if(c == ']') {
                grid.push_back(row);
                row.clear();
            }
        }
    }

    Solution sol;
    cout << sol.largestIsland(grid);

    return 0;
}