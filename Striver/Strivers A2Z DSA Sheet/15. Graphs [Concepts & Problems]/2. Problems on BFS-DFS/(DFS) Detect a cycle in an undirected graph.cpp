//https://takeuforward.org/plus/dsa/problems/detect-a-cycle-in-an-undirected-graph?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(V + E) && SC = O(V)
class Solution {
public:
    bool dfs(int node, int parent, 
        vector<int> adj[], vector<int> &vis) {
        vis[node] = 1;
        for(int neighb : adj[node]) {
            if(!vis[neighb]) {
                if(dfs(neighb, node, adj, vis)) 
                    return true;
            }
            else if(neighb != parent)
                return true;
        }
        return false;
    }

    bool isCycle(int V, vector<int> adj[]) {
        vector<int> vis(V, 0);
        for(int i=0; i<V; i++) {
            if(!vis[i]) {
                if(dfs(i, -1, adj, vis))
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

    int V; cin >> V;
    cin.ignore();
    string s; 
    getline(cin, s);
    
    vector<int> *adj = new vector<int>[V];
    vector<int> curr_row;
    string temp = "";
    int row = 0;

    for(char c : s) {
        if(c >= '0' && c <= '9')
            temp += c;

        if((c == ',' || c == ']') && !temp.empty()) {
            curr_row.push_back(stoi(temp));
            temp = "";
            }

        if(c == ']') {
            if(!curr_row.empty()) {
                adj[row] = curr_row;
                row++;
                curr_row.clear();
            }
        }
    }

    Solution sol;
    bool ans = sol.isCycle(V, adj);
    cout << (ans ? "True" : "False");

    return 0;
}