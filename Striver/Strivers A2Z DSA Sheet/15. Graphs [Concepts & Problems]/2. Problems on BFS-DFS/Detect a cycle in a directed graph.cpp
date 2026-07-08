//https://takeuforward.org/plus/dsa/problems/detect-a-cycle-in-a-directed-graph?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(V + E) && SC = O(V)
class Solution {
public:
    bool dfs(int node, vector<int> adj[], 
            vector<int> &vis, vector<int> &pathVis) {
        vis[node] = 1;
        pathVis[node] = 1;

        for(auto it : adj[node]) {
            if(!vis[it]) {
                if(dfs(it, adj, vis, pathVis))
                    return true;
            }
            else if(pathVis[it])
                return true;
        }

        pathVis[node] = 0;
        return false;
    }

    bool isCycle(int N, vector<int> adj[]) {
        vector<int> vis(N, 0), pathVis(N, 0);

        for(int i=0; i<N; i++) {
            if(!vis[i]) {
                if(dfs(i, adj, vis, pathVis))
                    return true;
            }
        }
        return false;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    

    return 0;
}