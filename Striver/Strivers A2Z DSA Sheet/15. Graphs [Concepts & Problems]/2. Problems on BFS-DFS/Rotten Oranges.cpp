//https://takeuforward.org/plus/dsa/problems/rotten-oranges?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = SC = O(n * m)
class Solution {
public:
    int orangesRotting(vector<vector<int>> &grid) {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<pair<int, int>, int>> q;
        int fresh = 0;

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == 2)
                    q.push({{i, j}, 0});
                else if(grid[i][j] == 1)
                    fresh++;
            }
        }

        int ans = 0;
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        while(!q.empty()) {
            auto it = q.front();
            q.pop();

            int r = it.first.first;
            int c = it.first.second;
            int time = it.second;

            ans = max(ans, time);

            for(int k=0; k<4; k++) {
                int nr = r + dr[k];
                int nc = c + dc[k];

                if(nr >= 0 && nr < n && 
                   nc >=0 &&  nc < m &&
                   grid[nr][nc] == 1) {
                    grid[nr][nc] = 2;
                    fresh--;

                    q.push({{nr, nc}, time+1});

                }
            }
        }
        return (fresh ? -1 : ans);
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
        else if((c == ',' || c == ']') && !temp.empty()) {
            curr_row.push_back(stoi(temp));
            temp = "";

            if(c == ']') {
                grid.push_back(curr_row);
                curr_row.clear();
            }
        }
    }

    Solution sol;
    cout << sol.orangesRotting(grid);

    return 0;
}