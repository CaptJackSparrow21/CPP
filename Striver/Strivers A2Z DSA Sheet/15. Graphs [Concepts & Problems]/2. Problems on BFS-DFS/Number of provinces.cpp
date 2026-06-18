//https://takeuforward.org/plus/dsa/problems/number-of-provinces?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(V * V) && SC = O(V)
class Solution {
public:
    void dfs(int node, vector<vector<int>> &adj, vector<int> &vis) {
        vis[node] = 1;

        for(int neighb=0; neighb < adj.size(); neighb++) {
            if(adj[node][neighb] == 1 && !vis[neighb]) {
                dfs(neighb, adj, vis);
            }
        }
    }

    int numProvinces(vector<vector<int>> adj) {
        int n = adj.size();
        vector<int> vis(n, 0);
        int provinces = 0;

        for(int i=0; i<n; i++) {
            if(!vis[i]) {
                provinces++;
                dfs(i, adj, vis);
            }
        }
        return provinces;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; 
    getline(cin, s);

    vector<vector<int>> adj;
    vector<int> curr_row;
    string temp = "";

    for(char c : s) {
        if(c >= '0' && c <= '9') 
            temp +=c ;
            
        else if((c == ',' || c == ']') && !temp.empty()) {
            curr_row.push_back(stoi(temp));
            temp = "";

            if(c == ']') {
                adj.push_back(curr_row);
                curr_row.clear();
            }
        }
    }

    Solution sol;
    cout << sol.numProvinces(adj);

    return 0;
}