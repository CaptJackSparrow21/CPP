//https://takeuforward.org/plus/dsa/problems/kosaraju's-algorithm?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = SC = O(V + E)
class Solution {
public:
    void dfs1(int u, vector<int> adj[], vector<int> &vis,
                stack<int> &st) {
        vis[u] = 1;

        for(int v : adj[u])
            if(!vis[v])
                dfs1(v, adj, vis, st);

        st.push(u);
    }

    void dfs2(int u, vector<int> rev[], vector<int> &vis) {
        vis[u] = 1;

        for(int v : rev[u])
            if(!vis[v])
                dfs2(v, rev, vis);
    }

    int kosaraju(int V, vector<int> adj[]) {
        vector<int> vis(V, 0);
        stack<int> st;

        //dfs and store finishing order
        for(int i=0; i<V; i++)
            if(!vis[i])
                dfs1(i, adj, vis, st);

        //reverse the graph
        vector<int> rev[V];

        for(int u=0; u<V; u++)
            for(int v : adj[u])
                rev[v].push_back(u);

        //dfs according to finishing order
        fill(vis.begin(), vis.end(), 0);

        int scc = 0;

        while(!st.empty()) {
            int u = st.top();
            st.pop();

            if(!vis[u]) {
                dfs2(u, rev, vis);
                scc++;
            }
        }
        return scc;
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

    vector<int> adj[V];

    int vertex = -1;
    int depth = 0;
    string num;

    for(char c : s) {
        if(c == '[') {
            depth++;

            if(depth == 2)
                vertex++;
        }
        else if(isdigit(c))
            num += c;
        
        else if(c == ',' || c == ']') {
            if(!num.empty()) {
                adj[vertex].push_back(stoll(num));
                num.clear();
            }

            if(c == ']')
                depth--;
        }
    }

    Solution sol;
    cout << sol.kosaraju(V, adj);

    return 0;
}