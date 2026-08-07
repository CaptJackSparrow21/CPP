//https://takeuforward.org/plus/dsa/problems/swim-in-rising-water?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n^2 log n)
//SC = O(n^2)
class Solution {
public:
    int swimInWater(vector<vector<int>> &grid) {
        int n = grid.size();
        vector<vector<int>> dist(n, vector<int> (n, INT_MAX));
        priority_queue<
            pair<int, pair<int, int>>,
            vector<pair<int, pair<int, int>>>,
            greater<pair<int, pair<int, int>>>
            > pq;

        dist[0][0] = grid[0][0];
        pq.push({grid[0][0], {0, 0}});

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        while(!pq.empty()) {
            auto curr = pq.top();
            pq.pop();

            int cost = curr.first;
            int r = curr.second.first;
            int c = curr.second.second;

            if(r == n-1 && c == n-1)
                return cost;

            for(int k=0; k<4; k++) {
                int nr = r + dr[k];
                int nc = c + dc[k];

                if(nr >= 0 && nr < n &&
                   nc >= 0 && nc < n) {
                    int newCost = max(cost, grid[nr][nc]);

                    if(newCost < dist[nr][nc]) {
                        dist[nr][nc] = newCost;
                        pq.push({newCost, {nr, nc}});
                    }
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
    cout << sol.swimInWater(grid);

    return 0;
}