class Solution {
public:
    void dfs(int node, vector<vector<int>> &adj,
             vector<bool> &vis, int &v, int &d) {
        vis[node] = true;
        v++;
        d += adj[node].size();
        for(int neighb : adj[node]) {
            if(!vis[neighb])
                dfs(neighb, adj, vis, v, d);
        }
    }

    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(auto edge : edges) {
            int u = edge[0], v = edge[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<bool> vis(n, false);
        int ans = 0;

        for(int i=0; i<n; i++) {
            if(!vis[i]) {
                int v = 0, d = 0;
                //v -> vertices && d -> degreesum
                dfs(i, adj, vis, v, d);

                if(d == v * (v - 1)) 
                    ans++;
            }
        }
        return ans;
    }
};