//https://takeuforward.org/plus/dsa/problems/connected-components?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = SC = O(V + E)
class Solution {
public:
    void dfs(int node, vector<int> &vis, vector<vector<int>> &adj) {
        vis[node] = 1;
        for(int neighb : adj[node]) {
            if(!vis[neighb])
                dfs(neighb, vis, adj);
        }
    }

    int findNumberOfComponent(int V, vector<vector<int>> &edges) {
        vector<vector<int>> adj(V);

        for(auto &e : edges) {
            int u = e[0];
            int v = e[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> vis(V, 0);
        int comp = 0;
        for(int i=0; i<V; i++) {
            if(!vis[i]) {
                dfs(i, vis, adj);
                comp++;
            }
        }
        return comp;
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

    vector<vector<int>> edges;
    vector<int> curr_row;
    string temp = "";

    for(int i=0; i<s.size(); i++) {
        char c = s[i];

        if(c >= '0' && c <= '9')
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()){
            curr_row.push_back(stoi(temp));
            temp = "";

            if(c == ']') {
                edges.push_back(curr_row);
                curr_row.clear();
            }
        }
    }

    Solution sol;
    cout << sol.findNumberOfComponent(V, edges);

    return 0;
}