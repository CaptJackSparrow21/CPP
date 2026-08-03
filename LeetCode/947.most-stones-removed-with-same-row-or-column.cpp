/*
 * @lc app=leetcode id=947 lang=cpp
 *
 * [947] Most Stones Removed with Same Row or Column
 */

// @lc code=start
class DisjointSet {
public:
    vector<int> parent, sz;

    DisjointSet(int n) {
        parent.resize(n);
        sz.assign(n, 1);

        for(int i=0; i<n; i++)
            parent[i] = i;
    }

    int findPar(int node) {
        if(node == parent[node])
            return node;
        return parent[node] = findPar(parent[node]);
    }

    void unionBySize(int u, int v) {
        u = findPar(u);
        v = findPar(v);

        if(u == v)
            return;

        if(sz[u] < sz[v])
            swap(u, v);

        parent[v] = u;
        sz[u] += sz[v];
    }
};

class Solution {
public:
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        int maxRow = 0, maxCol = 0;

        for(auto &it : stones) {
            maxRow = max(maxRow, it[0]);
            maxCol = max(maxCol, it[1]);
        }

        DisjointSet ds(maxRow + maxCol + 2);

        unordered_set<int> usedNodes;

        for(auto &it : stones) {
            int rowNode = it[0];
            int colNode = it[1] + maxRow + 1;

            ds.unionBySize(rowNode, colNode);

            usedNodes.insert(rowNode);
            usedNodes.insert(colNode);
        }

        int comp = 0;
        for(int node : usedNodes) {
            if(ds.findPar(node) == node)
                comp++;
        }

        return n - comp;
    }
};
// @lc code=end

