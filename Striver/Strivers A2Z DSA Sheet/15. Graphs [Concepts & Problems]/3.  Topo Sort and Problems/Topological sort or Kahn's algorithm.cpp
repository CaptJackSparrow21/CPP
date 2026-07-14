//https://takeuforward.org/plus/dsa/problems/topological-sort-or-kahns-algorithm?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(V + E) && SC = O(V)
class Solution {
public:
    vector<int> topoSort(int V, vector<int> adj[]) {
        vector<int> indegree(V, 0);
        for(int i=0; i<V; i++) {
            for(int it : adj[i])
                indegree[it]++;
        }

        queue<int> q;
        for(int i=0; i<V; i++) {
            if(indegree[i] == 0)
                q.push(i);
        }

        vector<int> topo;
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            topo.push_back(node);

            for(int it : adj[node]) {
                indegree[it]--;
                if(indegree[it] == 0)
                    q.push(it);
            }
        }
        return topo;
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
    vector<int> ans = sol.topoSort(V, adj);

    cout << "[";
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        if(i+1 != ans.size())
            cout << ",";
    }
    cout << "]";

    return 0;
}