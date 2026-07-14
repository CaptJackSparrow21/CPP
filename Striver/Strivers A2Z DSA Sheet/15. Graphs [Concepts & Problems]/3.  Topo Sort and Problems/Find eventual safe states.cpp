//https://takeuforward.org/plus/dsa/problems/find-eventual-safe-states?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//
class Solution {
public:
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        
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
        if(i+1 == ans.size())
            cout << ',';
    }
    cout << ']';

    return 0;
}