/*
 * @lc app=leetcode id=323 lang=cpp
 *
 * [323] Number of Connected Components in Graph
 */

// @lc code=start
class Solution {
public:
    void dfs(int node, vector<int> &vis, vector<vector<int>> &adj) {
        vis[node] = 1;
        for(int neighb : adj[node]) {
            
        }
    }

    int findNumberOfComponents(int V, vector<vector<int>> &edges) {
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
// @lc code=end

