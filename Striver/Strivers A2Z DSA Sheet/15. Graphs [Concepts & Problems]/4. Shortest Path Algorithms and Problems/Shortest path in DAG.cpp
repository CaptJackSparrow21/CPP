//https://takeuforward.org/plus/dsa/problems/shortest-path-in-dag?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = SC = O(N + M)
class Solution {
public:
    void dfs(int node, vector<vector<pair<int, int>>> &adj,
                vector<int> &vis, stack<int> &st) {
        vis[node] = 1;

        for(auto &it : adj[node]) {
            int neighb = it.first;

            if(!vis[neighb])
                dfs(neighb, adj, vis, st);
        }
        st.push(node);
    }

    vector<int> shortestPath(int N, int M, 
                        vector<vector<int>> &edges) {
        vector<vector<pair<int, int>>> adj(N);

        for(auto &it : edges) {
            int u = it[0];
            int v = it[1];
            int wt = it[2];

            adj[u].push_back({v, wt});
        }

        vector<int> vis(N, 0);
        stack<int> st;

        for(int i=0; i<N; i++) {
            if(!vis[i])
                dfs(i, adj, vis, st);
        }

        vector<int> dist(N, 1e9);
        dist[0] = 0;

        while(!st.empty()) {
            int node = st.top();
            st.pop();

            if(dist[node] == 1e9)
                continue;

            for(auto &it : adj[node]) {
                int neighb = it.first;
                int wt = it.second;

                if(dist[node] + wt < dist[neighb])
                    dist[neighb] = dist[node] + wt;
            }
        }

        for(int i=0; i<N; i++) {
            if(dist[i] == 1e9)
                dist[i] = -1;
        }

        return dist;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    cin >> N;
    cin >> M;
    cin.ignore();

    string s;
    getline(cin, s);

    vector<vector<int>> edges;
    vector<int> row;
    string temp = "";

    for(char c : s) {
        if(c >= '0' && c <= '9')
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoi(temp));
            temp = "";

            if(c == ']') {
                edges.push_back(row);
                row.clear();
            }
        }
    }

    Solution sol;
    vector<int> ans = sol.shortestPath(N, M, edges);

    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        if(i+1 != ans.size())
            cout << ' ';
    }

    return 0;
}