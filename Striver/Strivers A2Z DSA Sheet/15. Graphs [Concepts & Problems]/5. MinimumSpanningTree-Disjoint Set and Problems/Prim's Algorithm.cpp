//https://takeuforward.org/plus/dsa/problems/find-the-mst-weight?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(E log V) && SC = O(V)
class Solution {
public:
    int spanningTree(int V, vector<vector<int>> adj[]) {
        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
            > pq;

        vector<int> vis(V, 0);
        pq.push({0, 0});

        int sum = 0;

        while(!pq.empty()) {
            auto [wt, node] = pq.top();
            pq.pop();

            if(vis[node])
                continue;

            vis[node] = 1;
            sum += wt;

            for(auto &it : adj[node]) {
                int adjNode = it[0];
                int edgeWt = it[1];

                if(!vis[adjNode])
                    pq.push({edgeWt, adjNode});
            }
        }
        return sum;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int V; cin >> V;
    string s;
    getline(cin, s);

    vector<vector<int>> adj;
    vector<int> row;
    string temp = "";
    for(char c : s) {
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoll(temp));
            temp = "";

            if(c == ']') {
                adj.push_back(row);
                row.clear();
            }
        }
    }

    Solution sol;
    cout << sol.spanningTree(V, adj);

    return 0;
}