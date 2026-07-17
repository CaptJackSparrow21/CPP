//https://takeuforward.org/plus/dsa/problems/dijkstra's-algorithm?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O((V + E) log V) && SC = O(V + E)
class Solution {
public:
    vector<int> dijkstra(int V, vector<vector<int>> edges, int S) {
        vector<vector<pair<int, int>>> adj(V);

        for(auto &e : edges) {
            int u = e[0];
            int v = e[1];
            int wt = e[2];

            adj[u].push_back({v, wt});
            adj[v].push_back({u, wt});
        }

        vector<int> dist(V, 1e9);

        priority_queue<pair<int, int>,
                        vector<pair<int, int>>,
                        greater<pair<int, int>>> pq;

        dist[S] = 0;
        pq.push({0, S});

        while(!pq.empty()) {
            auto [d, node] = pq.top();
            pq.pop();

            if(d > dist[node])
                continue;

            for(auto &[adjNode, wt] : adj[node]) {
                if(dist[node] + wt < dist[adjNode]) {
                    dist[adjNode] = dist[node] + wt;
                    pq.push({dist[adjNode], adjNode});
                }
            }
        }
        return dist;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int V, S;
    cin >> V;
    cin.ignore();

    string s;
    getline(cin, s);

    vector<vector<int>> edges;
    vector<int> row;
    string temp = "";

    for(char c : s) {
        if(c >= '0' && c <= '9')
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoi(temp));
            temp = "";

            if(c == ']') {
                edges.push_back(row);
                row.clear();
            }
        }
    }

    cin >> S;

    Solution sol;
    vector<int> ans = sol.dijkstra(V, edges, S);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        if(i+1 != ans.size())
            cout << ",";
    }
    cout << "]";

    return 0;
}