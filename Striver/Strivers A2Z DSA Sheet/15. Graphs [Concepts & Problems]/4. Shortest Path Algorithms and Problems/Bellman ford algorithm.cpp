//https://takeuforward.org/plus/dsa/problems/bellman-ford-algorithm?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(V * E) && SC = O(V)
class Solution {
public:
    vector<int> bellman_ford(int V, vector<vector<int>> &edges, int S) {
        const int inf = 1e8;
        vector<int> dist(V, inf);
        dist[S] = 0;

        for(int i=1; i<=V-1; i++) {
            for(auto &e : edges) {
                int u = e[0];
                int v = e[1];
                int w = e[2];

                if(dist[u] != inf && dist[u] + w < dist[v])
                    dist[v] = dist[u] + w;
            }
        }

        for(auto &e : edges) {
            int u = e[0];
            int v = e[1];
            int w = e[2];

            if(dist[u] != inf && dist[u] + w < dist[v])
                return {-1};
        }
        return dist;
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

    int S; cin >> S;

    vector<vector<int>> edges;
    vector<int> row;
    string temp = "";
    for(char c : s) {
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoll(temp));
            temp = "";

            if(c == ']') {
                edges.push_back(row);
                row.clear();
            }
        }
    }

    Solution sol;
    vector<int> ans = sol.bellman_ford(V, edges, S);

    for(int i : ans)
        cout << i << ' ';

    return 0;
}