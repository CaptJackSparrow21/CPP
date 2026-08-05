/*
 * @lc app=leetcode id=3310 lang=cpp
 *
 * [3310] Remove Methods From Project
 */

// @lc code=start
class Solution {
public:
    void dfs(int u, vector<vector<int>> &adj, vector<int> &vis) {
        vis[u] = 1;
        for(int v : adj[u])
            if(!vis[v])
                dfs(v, adj, vis);
    }

    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>> adj(n);
        for(auto &e : invocations)
            adj[e[0]].push_back(e[1]);

        vector<int> vis(n, 0);
        dfs(k, adj, vis);

        for(auto &e : invocations) {
            int u = e[0], v = e[1];

            if(!vis[u] && vis[v]) {
                vector<int> ans;
                for(int i=0; i<n; i++)
                    ans.push_back(i);
                return ans;
            }
        }

        vector<int> result;
        for(int i=0; i<n; i++)
            if(!vis[i])
                result.push_back(i);

        return result;
    }
};
// @lc code=end

