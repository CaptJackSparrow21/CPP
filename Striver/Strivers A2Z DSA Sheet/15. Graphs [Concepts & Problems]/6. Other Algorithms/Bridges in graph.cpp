//https://takeuforward.org/plus/dsa/problems/bridges-in-graph?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = SC = O(V + E)
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

    vector<vector<int>> criticalConnections(int V, 
                                vector<vector<int>> &E) {
        adj.resize(V);
        tin.assign(V, -1);
        low.resize(V);

        for(auto &e : E) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        dfs(0, -1);
        return ans;
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

    vector<vector<int>> E;
    vector<int> row;
    string temp = "";
    for(char c : s) {
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoll(temp));
            temp = "";

            if(c == ']') {
                E.push_back(row);
                row.clear();
            }
        }
    }

    Solution sol;
    vector<vector<int>> ans = sol.criticalConnections(V, E);

    cout << '[';
    for(int i=0; i<ans.size(); i++) {
        cout << '[';
        for(int j=0; j<ans[i].size(); j++) {
            cout << ans[i][j];
            if(j + 1 != ans[i].size())
                cout << ',';
        }
        cout << ']';
        if(i + 1 != ans.size())
            cout << ',';
    }
    cout << ']';

    return 0;
}