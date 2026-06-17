//https://takeuforward.org/plus/dsa/problems/traversal-techniques?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = SC = O(V + E)
class Solution {
public:
    void dfs(int node, vector<int> &vis,
            vector<vector<int>> &adj, vector<int> &ans) {
        vis[node] = 1;
        ans.push_back(node);

        for(int neighb : adj[node]) {
            if(!vis[neighb])
                dfs(neighb, vis, adj, ans);
        }
    }

    vector<int> dfsOfGraph(int V, vector<vector<int>> edges) {
        vector<vector<int>> adj(V);
        for(auto &e : edges) {
            int u = e[0];
            int v = e[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> vis(V, 0);
        vector<int> ans;

        dfs(0, vis, adj, ans);
        return ans;
    }

    vector<int> bfsOfGraph(int V, vector<vector<int>> edges) {
        vector<vector<int>> adj(V);

        for(auto &e : edges) {
            int u = e[0];
            int v = e[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> vis(V, 0);
        vector<int> ans;
        queue<int> q;

        q.push(0);
        vis[0] = 1;

        while(!q.empty()) {
            int node = q.front();
            q.pop();

            ans.push_back(node);

            for(int neighb : adj[node]) {
                if(!vis[neighb]) {
                    vis[neighb] = 1;
                    q.push(neighb);
                }
            }
        }
        return ans;
    }
};

void printAns(vector<int> &ans) {
    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        if(i+1 < ans.size())
            cout << ",";
    }
    cout << "]";
}

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

    for(char c : s) {
        if(c >= '0' && c <= '9')
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            curr_row.push_back(stoi(temp));
            temp = "";

            if(c == ']') {
                edges.push_back(curr_row);
                curr_row.clear();
            }
        }
    }

    Solution sol;
    vector<int> dfsAns = sol.dfsOfGraph(V, edges);
    vector<int> bfsAns = sol.bfsOfGraph(V, edges);

    printAns(dfsAns);
    cout << ",";
    printAns(bfsAns);

    return 0;
}