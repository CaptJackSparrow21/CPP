//https://takeuforward.org/plus/dsa/problems/bipartite-graph?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = SC = O(V + E)
class Solution {
public:
    bool bfs(int src, vector<vector<int>> &adj, vector<int> &color) {
        queue<int> q;
        q.push(src);
        color[src] = 0;

        while(!q.empty()) {
            int node = q.front();
            q.pop();

            for(auto it : adj[node]) {
                if(color[it] == -1) {
                    color[it] = 1 - color[node];
                    q.push(it);
                }
                else if(color[it] == color[node])
                    return false;
            }
        }
        return true;
    }

    bool isBipartite(int V, vector<vector<int>> edges) {
        vector<vector<int>> adj(V);
        for(auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<int> color(V, -1);

        for(int i=0; i<V; i++) {
            if(color[i] == -1) {
                if(!bfs(i, adj, color))
                    return false;
            }
        }
        return true;
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

    vector<int> nums;
    string curr = "";

    for(char c : s) {
        if(isdigit(c))
            curr += c;
        else {
            if(!curr.empty()) {
                nums.push_back(stoi(curr));
                curr.clear();
            }
        }
    }

    vector<vector<int>> edges;
    for(int i=0; i<nums.size(); i+=2)
        edges.push_back({nums[i], nums[i+1]});

    Solution sol;
    cout << (sol.isBipartite(V, edges) ? "True" : "False");

    return 0;
}