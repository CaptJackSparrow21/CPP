//https://takeuforward.org/plus/dsa/problems/articulation-point-in-graph?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(V + E) && SC = O(V)
class Solution {
public:
    int timer;
    vector<int> tin, low, vis, isAP;

    void dfs(int u, int parent, vector<int> adj[]) {
        vis[u] = 1;
        tin[u] = low[u] = timer++;

        int children = 0;
        bool skippedParent = false;

        for (int v : adj[u]) {
            if (v == u) continue;  // ignore self-loop

            if (v == parent && !skippedParent) {
                skippedParent = true;
                continue;
            }

            if (!vis[v]) {
                dfs(v, u, adj);
                low[u] = min(low[u], low[v]);

                if (parent != -1 && low[v] >= tin[u])
                    isAP[u] = 1;

                children++;
            }
            else {
                low[u] = min(low[u], tin[v]);
            }
        }

        if (parent == -1 && children > 1)
            isAP[u] = 1;
    }

    vector<int> articulationPoints(int V, vector<int> adj[]) {
        timer = 0;

        tin.assign(V, -1);
        low.assign(V, -1);
        vis.assign(V, 0);
        isAP.assign(V, 0);

        for (int i = 0; i < V; i++) {
            if (!vis[i])
                dfs(i, -1, adj);
        }

        vector<int> ans;

        for (int i = 0; i < V; i++) {
            if (isAP[i])
                ans.push_back(i);
        }

        if (ans.empty())
            return {-1};

        return ans;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int V;
    cin >> V;
    cin.ignore();

    string s;
    getline(cin, s);

    vector<int> adj[V];

    int vertex = -1;
    int depth = 0;
    string num;

    for (char c : s) {

        if (c == '[') {
            depth++;

            // [[ means starting adjacency list of a new vertex
            if (depth == 2)
                vertex++;
        }

        else if (isdigit(c)) {
            num += c;
        }

        else if (c == ',' || c == ']') {

            if (!num.empty()) {
                adj[vertex].push_back(stoll(num));
                num.clear();
            }

            if (c == ']')
                depth--;
        }
    }

    Solution sol;

    vector<int> ans = sol.articulationPoints(V, adj);

    cout << "[";

    for (int i = 0; i < ans.size(); i++) {
        if (i)
            cout << ",";

        cout << ans[i];
    }

    cout << "]\n";

    return 0;
}