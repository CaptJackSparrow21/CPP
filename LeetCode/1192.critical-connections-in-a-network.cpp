/*
 * @lc app=leetcode id=1192 lang=cpp
 *
 * [1192] Critical Connections in a Network
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> adj, ans;
    vector<int> tin, low;
    int timer = 0;

    void dfs(int u, int parent) {
        tin[u] = low[u] = timer++;

        for(int v : adj[u]) {
            if(v == parent)
                continue;

            if(tin[v] == -1) {
                dfs(v, u);

                low[u] = min(low[u], low[v]);

                if(low[v] > tin[u])
                    ans.push_back({u, v});
            }
            else
                low[u] = min(low[u], tin[v]);
        }
    }

    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        adj.resize(n);
        tin.assign(n, -1);
        low.resize(n);

        for(auto &e : connections) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        dfs(0, -1);
        return ans;
    }
};
// @lc code=end

