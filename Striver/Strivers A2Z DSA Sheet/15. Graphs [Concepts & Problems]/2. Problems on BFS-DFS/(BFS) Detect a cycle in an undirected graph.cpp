//https://takeuforward.org/plus/dsa/problems/detect-a-cycle-in-an-undirected-graph?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(V + E) && SC = O(V)
class Solution {
public:
    bool bfs(int start, vector<int> adj[], vector<int> &vis) {
        queue<pair<int, int>> q;
        q.push({start, -1});
        vis[start] = 1;

        while(!q.empty()) {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();

            for(int neighb : adj[node]) {
                if(!vis[neighb]) {
                    vis[neighb] = 1;
                    q.push({neighb, node});
                }
                else if(neighb != parent)
                    return true;
            }
        }
        return false;
    }

    bool isCycle(int V, vector<int> adj[]) {
        vector<int> vis(V, 0);
        for(int i=0; i<V; i++) {
            if(!vis[i]) {
                if(bfs(i, adj, vis))
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