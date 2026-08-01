//https://takeuforward.org/plus/dsa/problems/find-the-mst-weight?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(E log V) && SC = O(V)
class Solution {
public:
    int spanningTree(int V, vector<vector<int>> adj[]) {
        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
            > pq;

        vector<int> vis(V, 0);
        pq.push({0, 0});

        int sum = 0;

        while(!pq.empty()) {
            auto [wt, node] = pq.top();
            pq.pop();

            if(vis[node])
                continue;

            vis[node] = 1;
            sum += wt;

            for(auto &it : adj[node]) {
                int adjNode = it[0];
                int edgeWt = it[1];

                if(!vis[adjNode])
                    pq.push({edgeWt, adjNode});
            }
        }
        return sum;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int V; cin >> V;
    cin.ignore();
    string s;
    getline(cin, s);

    vector<vector<int>> adj[V];

    int vertex = -1;
    int depth = 0;
    vector<int> edge;
    string num = "";

    for(char c : s) {

        if(c == '[') {
            depth++;

            // New vertex starts
            if(depth == 2)
                vertex++;
        }

        else if(isdigit(c) || c == '-')
            num += c;

        else {

            if(!num.empty()) {
                edge.push_back(stoll(num));
                num.clear();
            }

            if(c == ']' && edge.size() == 2) {
                adj[vertex].push_back(edge);
                edge.clear();
            }

            if(c == ']')
                depth--;
        }
    }

    Solution sol;
    cout << sol.spanningTree(V, adj);

    return 0;
}