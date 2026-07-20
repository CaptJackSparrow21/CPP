//https://takeuforward.org/plus/dsa/problems/path-with-minimum-effort?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O((n * m) log (n * m))
//SC = O(n * m)
class Solution {
public:
    int MinimumEffort(vector<vector<int>> &heights) {
        int n = heights.size();
        int m = heights[0].size();

        vector<vector<int>> effort(n, vector<int> (m,INT_MAX));

        priority_queue<
            pair<int, pair<int, int>>,
            vector<pair<int, pair<int, int>>>,
            greater<pair<int, pair<int, int>>>
            > pq;

        effort[0][0] = 0;
        pq.push({0, {0, 0}});

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        while(!pq.empty()) {
            auto it = pq.top();
            pq.pop();

            int currEffort = it.first;
            int r = it.second.first;
            int c = it.second.second;

            if(r == n-1 && c == m-1)
                return currEffort; 

            for(int k=0; k<4; k++) {
                int nr = r + dr[k];
                int nc = c + dc[k];

                if(nr >= 0 && nr < n && nc >= 0 && nc < m) {
                    int newEffort = max( currEffort,
                        abs(heights[r][c] - heights[nr][nc]));
                    if(newEffort < effort[nr][nc]) {
                        effort[nr][nc] = newEffort;
                        pq.push({newEffort, {nr, nc}});
                    }
                }
            }
        }
        return 0;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);

    vector<vector<int>> heights;
    vector<int> row;
    string temp;

    for(char c : s) {
        if(c >= '0' && c <= '9')
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoi(temp));
            temp = "";

            if(c == ']') {
                heights.push_back(row);
                row.clear();
            }
        }
    }

    Solution sol;
    cout << sol.MinimumEffort(heights);

    return 0;
}