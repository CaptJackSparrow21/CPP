//https://takeuforward.org/plus/dsa/problems/number-of-ways-to-arrive-at-destination?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O((V + E) log V)
//SC = O(V + E)
class Solution {
public:
    int countPaths(int n, vector<vector<int>> &roads) {
//#define int long long
        const int mod = 1e9 + 7;
        vector<vector<pair<int, int>>> adj(n);
        for(auto &e : roads) {
            int u = e[0];
            int v = e[1];
            int w = e[2];

            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }

        vector<int> dist(n, LLONG_MAX);
        vector<int> ways(n, 0);

        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
            > pq;

        dist[0] = 0;
        ways[0] = 1;

        pq.push({0, 0});

        while(!pq.empty()) {
            auto [d, u] = pq.top();
            pq.pop();

            if(d > dist[u])
                continue;

            for(auto &[v, w] : adj[u]) {
                int newDist = d + w;
                if(newDist < dist[v]) {
                    dist[v] = newDist;
                    ways[v] = ways[u];

                    pq.push({dist[v], v});
                }

                else if(newDist == dist[v]) {
                    ways[v] = (ways[v] + ways[u]) % mod;
                }
            }
        }
        int ans = ways[n-1];
//#undef int 
        return ans;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m; 
    cin >> n;
    cin >> m;
    cin.ignore();

    string s; 
    getline(cin, s);
    vector<vector<int>> roads;
    vector<int> row;
    string temp = "";

    for(char c : s) {
        if(c >= '0' && c <= '9')
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoi(temp));
            temp = "";

            if(c == ']') {
                roads.push_back(row);
                row.clear();
            }
        }
    }

    Solution sol;
    cout << sol.countPaths(n, roads);

    return 0;
}