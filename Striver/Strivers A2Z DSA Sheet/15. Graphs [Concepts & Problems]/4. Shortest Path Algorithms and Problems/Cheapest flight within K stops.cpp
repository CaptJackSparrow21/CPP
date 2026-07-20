//https://takeuforward.org/plus/dsa/problems/cheapest-flight-within-k-stops?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//
class Solution {
public:
    int CheapestFlight(int n, vector<vector<int>> &flights, 
                        int src, int dst, int K) {
        vector<pair<int, int>> adj[n];
        
        for(auto &it : flights) 
            adj(it[0].push_back({it[1], it[2]}));

        queue<pair<int, pair<int, int>>> q;
        //{stops, {node, cost}}

        vector<int> dist(n, 1e9);
        dist[src] = 0;
        q.push({0, {src, 0}});
        while(!q.empty()) {
            auto it = q.front();
            q.pop();

            int stops = it.first;
            int node = it.second.first;
            int cost = it.second.second;

            if(stops > K)
                continue;

            for(auto &x : adj[node]) {
                int adjNode = x.first;
                int wt = x.second;

                if(cost + wt < dist[adjNode] && )
            }
        }
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, K, src, dist;
    cin >> n;
    cin.ignore();
    string s; cin >> s;
    cin >> src;
    cin >> dst;
    cin >> K;
    
    vector<vector<int>> flights;
    vector<int> row;
    string temp = "";

    for(char c : s) {
        if(c >= '0' && c <= '9')
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoi(temp));
            temp = "";

            if(c == ']') {
                flights.push_back(row);
                row.clear();
            }
        }
    }

    Solution sol;
    cout << sol.CheapestFlight(n, flights, src, dist, K);

    return 0;
}