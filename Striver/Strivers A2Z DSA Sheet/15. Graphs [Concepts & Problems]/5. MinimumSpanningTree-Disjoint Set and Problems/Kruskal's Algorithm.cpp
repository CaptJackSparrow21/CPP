//https://takeuforward.org/plus/dsa/problems/find-the-mst-weight?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(E log E) && SC = O(E + V)
class DisjointSet {
public:
    vector<int> parent, size;
    DisjointSet(int n) {
        parent.resize(n);
        size.resize(n, 1);

        for(int i=0; i<n; i++)
            parent[i] = i;
    }

    int findParent(int node) {
        if(parent[node] == node)
            return node;

        return parent[node] = findParent(parent[node]);
    }

    void unionBySize(int u, int v) {
        u = findParent(u);
        v = findParent(v);

        if(u == v)
            return;

        if(size[u] < size[v]) {
            parent[u] = v;
            size[v] += size[u];
        }
        else {
            parent[v] = u;
            size[u] += size[v];
        }
    }
};

class Solution {
public:
    int spanningTree(int V, vector<vector<int>> adj[]) {
        vector<vector<int>> edges;

        for(int u=0; u<V; u++) {
            for(auto &it : adj[u]) {
                int v = it[0];
                int wt = it[1];

                if(u < v)
                    edges.push_back({wt, u, v});
            }
        }

        sort(edges.begin(), edges.end());
        DisjointSet ds(V);
        int mstWeight = 0;

        for(auto &e : edges) {
            int wt = e[0];
            int u = e[1];
            int v = e[2];

            if(ds.findParent(u) != ds.findParent(v)) {
                mstWeight += wt;
                ds.unionBySize(u, v);
            }
        }
        return mstWeight;
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