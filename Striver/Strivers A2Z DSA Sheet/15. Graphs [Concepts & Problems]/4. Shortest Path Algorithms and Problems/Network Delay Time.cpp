//https://takeuforward.org/plus/dsa/problems/network-delay-time?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O((V + E) log V)
//SC = O(V + E)
class Solution {
public:
    int networkDelayTime(vector<vector<int>> &times, int n, int k) {
        vector<pair<int, int>> adj[n + 1];

        for(auto &it : times)
            adj[it[0]].push_back({it[1], it[2]});

        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
            > pq;

        vector<int> dist(n + 1, 1e9);
        dist[k] = 0;
        pq.push({0, k});

        while(!pq.empty()) {
            auto it = pq.top();
            pq.pop();

            int dis = it.first;
            int node = it.second;

            if(dis > dist[node])
                continue;

            for(auto &x : adj[node]) {
                int adjNode = x.first;
                int wt = x.second;

                if(dis + wt < dist[adjNode]) {
                    dist[adjNode] = dis + wt;
                    pq.push({dist[adjNode], adjNode});
                }
            }
        }
        int ans = 0;
        for(int i=1; i<=n; i++) {
            if(dist[i] ==  1e9)
                return -1;

            ans = max(ans, dist[i]);
        }
        return ans;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; 
    getline(cin, s);
    
    int n, k;
    cin >> n;
    cin >> k;

    vector<vector<int>> times;
    vector<int> row;
    string temp = "";

    for(char c : s) {
        if(c >= '0' && c <= '9')
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoll(temp));
            temp = "";

            if(c == ']') {
                times.push_back(row);
                row.clear();
            }
        }
    }

    Solution sol;
    cout << sol.networkDelayTime(times, n, k);

    return 0;
}