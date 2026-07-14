//https://takeuforward.org/plus/dsa/problems/find-eventual-safe-states?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

// //Approach - DFS + Cycle Detection
// //TC = O(V + E) && SC = O(V)
// class Solution {
// public:
//     bool dfs(int node, vector<int> adj[], vector<int> &vis,
//              vector<int> &pathVis, vector<int> &check) {
//         vis[node] = 1;
//         pathVis[node] = 1;

//         for(auto it : adj[node]) {
//             if(!vis[it]) {
//                 if(dfs(it, adj, vis, pathVis, check))
//                     return true;
//             }
//             else if(pathVis[it])
//                 return true;
//         }

//         pathVis[node] = 0;
//         check[node] = 1;

//         return false;
//     }

//     vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
//         vector<int> vis(V, 0), pathVis(V, 0), check(V, 0);

//         for(int i=0; i<V; i++) {
//             if(!vis[i])
//                 dfs(i, adj, vis, pathVis, check);
//         }
//         vector<int> ans;

//         for(int i=0; i<V; i++) {
//             if(check[i])
//                 ans.push_back(i);
//         }
//         return ans;
//     }
// };

//Approach - Reverse Graph + Kahn's Algorithm
//TC = SC = O(V + E)
class Solution {
public:
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        vector<int> revAdj[V];
        vector<int> outdegree(V, 0);

        for(int i=0; i<V; i++) {
            outdegree[i] = adj[i].size();

            for(auto it : adj[i])
                revAdj[it].push_back(i);
        }

        queue<int> q;
        for(int i=0; i<V; i++) {
            if(outdegree[i] == 0)
                q.push(i);
        }

        vector<int> ans;
        while(!q.empty()) {
            int node = q.front();
            q.pop();

            ans.push_back(node);
            for(auto parent : revAdj[node]) {
                outdegree[parent]--;

                if(outdegree[parent] == 0)  
                    q.push(parent);
            }
        }
        sort(ans.begin(), ans.end());
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

    vector<int> adj[V];
    int row = -1;
    string num = "";

    for(char c : s) {
        if(c == '[')
            row++;
        else if(isdigit(c))
            num += c;   
        else {
            if(!num.empty()) {
                adj[row-1].push_back(stoi(num));
                num.clear();
            }
        }
    }

    Solution sol;
    vector<int> ans = sol.eventualSafeNodes(V, adj);

    cout << '[';
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        if(i+1 != ans.size())
            cout << ',';
    }
    cout << ']';

    return 0;
}