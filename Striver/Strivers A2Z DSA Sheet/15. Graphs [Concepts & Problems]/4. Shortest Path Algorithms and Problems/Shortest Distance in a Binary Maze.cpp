//https://takeuforward.org/plus/dsa/problems/shortest-path-with-minimum-effort?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = SC = O(n * m) 
class Solution {
public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source, pair<int, int> destination) {
        int n = grid.size();
        int m = grid[0].size();

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

            for(int k=0; k<4; k++) {
                int nr = r + dr[k];
                int nc = c + dc[k];

                if(nr >= 0 && nr < n && nc >= 0 && nc < m
                   && grid[nr][nc] == 1 && d+1 < dist[nr][nc]) {
                    dist[nr][nc] = d + 1;
                    if(nr == destination.first &&
                       nc == destination.second)
                        return d + 1;

                    q.push({d + 1, {nr, nc}});
                }
            }
        }
        return -1;
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
        if(c >= '0' && c <= '9')
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoi(temp));
            temp = "";

            if(c == ']') {
                grid.push_back(row);
                row.clear();
            }
        }
    }

    char ch;
    pair<int, int> source, destination;
    cin >> ch >> source.first >> ch >> source.second >> ch;
    cin >> ch >> destination.first >> ch >> destination.second >> ch;

    Solution sol;
    cout << sol.shortestPath(grid, source, destination);

    return 0;
}