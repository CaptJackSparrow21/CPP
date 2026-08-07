//https://takeuforward.org/plus/dsa/problems/making-a-large-island?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = SC = O(n^2)
class Solution {
public:
    int dr[4] = {-1, 1, 0, 0};
    int dc[4] = {0, 0, -1, 1};
    int n;

    int dfs(int r, int c, int id, 
            vector<vector<int>> &grid) {
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

    int largestIsland(vector<vector<int>> &grid) {
        n = grid.size();
        vector<int> islandSize;
        int id = 2;

        //color every island
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j] == 1) {
                    int size = dfs(i, j, id, grid);
                    islandSize.push_back(size);
                    id++;
                }
            }
        }

        //no island present
        if(islandSize.size() == 0)
            return 1;

        int ans = 0;

        //try converting each zero
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(grid[i][j] == 0) {
                    set<int> st;
                    for(int k=0; k<4; k++) {
                        int nr = i + dr[k];
                        int nc = j + dc[k];

                        if(nr >= 0 && nr < n &&
                           nr < n && nc < n &&
                           grid[nr][nc] > 1) {
                            st.insert(grid[nr][nc]);
                        }
                    }

                    int size = 1;
                    for(int islandId : st) 
                        size += islandSize[islandId - 2];
                        
                    ans = max(ans, size);
                }
            }
        }

        for(int x : islandSize)
            ans = max(ans, x);
        
        return ans;
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