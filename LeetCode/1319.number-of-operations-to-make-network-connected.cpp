/*
 * @lc app=leetcode id=1319 lang=cpp
 *
 * [1319] Number of Operations to Make Network Connected
 */

// @lc code=start
class Solution {
public:
    vector<int> parent, sz;

    int find(int x) {
        if(parent[x] == x)
            return x;
        return parent[x] = find(parent[x]);
    }

    void unite(int u, int v) {
        u = find(u);
        v = find(v);

        if(u == v)
            return;
        
        if(sz[u] < sz[v])
            swap(u, v);

        parent[v] = u;
        sz[u] += sz[v];
    }

    int makeConnected(int n, vector<vector<int>>& connections) {
        parent.resize(n);
        sz.assign(n, 1);

        for(int i=0; i<n; i++)
            parent[i] = i;

        int extraEdges = 0;

        for(auto &e : connections) {
            int u = e[0], v = e[1];

            if(find(u) == find(v))
                extraEdges++;
            else    
                unite(u, v);
        }

        int components = 0;
        for(int i=0; i<n; i++)
            if(find(i) == i)
                components++;

        int need = components - 1;
        return (extraEdges >= need) ? need : -1;
    }
};
// @lc code=end

