//https://takeuforward.org/plus/dsa/problems/m-coloring-problem

#include<bits/stdc++.h>
using namespace std;

//TC = O(n * m^n) && SC = O(n)
class Solution {
public:
    bool isSafe(int node, int col, 
        vector<vector<int>> &adj, vector<int> &color) {
        for(int neigh : adj[node]) {
            if(color[neigh] == col) {
                return false;
            }
        }
        return true;
    }

    bool solve(int node, int n, int m, 
        vector<vector<int>> &adj, vector<int> &color) {
        if(node == n) {
                return true;
        }
        for(int col=1; col<=m; col++) {
            if(isSafe(node, col, adj, color)) {
                color[node] = col;
                if(solve(node+1, n, m, adj, color)) {
                    return true;
                }
                color[node] = 0;
            }
        }
        return false;
    }

    bool graphColoring(vector<vector<int>> &edges, int m, int n) {
        vector<vector<int>> adj(n);
        for(auto &edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }

        vector<int> color(n, 0);
        return solve(0, n, m, adj, color);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m; cin >> m; //colours available
    int n; cin >> n; //vertices
    int e; cin >> e; // edges

    vector<vector<int>> edges(e, vector<int>(2));
    for(int i=0; i<e; i++) {
        cin >> edges[i][0] >> edges[i][1];
    }

    Solution sol;
    cout << boolalpha << sol.graphColoring(edges, m, n) << endl;

    return 0;
}