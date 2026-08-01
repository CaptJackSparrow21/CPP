//https://takeuforward.org/plus/dsa/problems/find-the-city-with-the-smallest-number-of-neighbors?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(N^3) && SC = O(N^2)
class Solution {
public:
    int findCity(int n, int m, vector<vector<int>> &edges, 
                 int distanceThreshold) {
        const int inf = 1e9;
        vector<vector<int>> dist(n, vector<int> (n, inf));

        for(int i=0; i<n; i++)
            dist[i][i] = 0;

        for(auto &e : edges) {
            int u = e[0];
            int v = e[1];
            int w = e[2];

            dist[u][v] = w;
            dist[v][u] = w;
        }

        for(int k=0; k<n; k++) {
            for(int i=0; i<n; i++) {
                for(int j=0; j<n; j++) {
                    if(dist[i][k] != inf &&
                       dist[k][j] != inf) {
                        dist[i][j] = min(dist[i][j], 
                                    dist[i][k] + dist[k][j]);
                    }
                }
            }
        }

        int city = -1;
        int minCount = INT_MAX;

        for(int i=0; i<n; i++) {
            int cnt = 0;
            for(int j=0; j<n; j++) {
                if(dist[i][j] <= distanceThreshold)
                    cnt++;
            }

            if(cnt <= minCount) {
                minCount = cnt;
                city = i;
            }
        }
        return city;
    }   
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m,distanceThreshold;
    cin >> n;
    cin >> m;
    string s;
    getline(cin, s);
    cin.ignore();
    cin >> distanceThreshold;

    vector<vector<int>> edges;
    vector<int> row;
    string temp = "";
    for(char c : s) {
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoll(temp));
            temp = "";

            if(c == ']') {
                edges.push_back(row);
                row.clear();
            }
        }
    }

    Solution sol;
    cout << sol.findCity(n, m, edges, distanceThreshold);

    return 0;
}