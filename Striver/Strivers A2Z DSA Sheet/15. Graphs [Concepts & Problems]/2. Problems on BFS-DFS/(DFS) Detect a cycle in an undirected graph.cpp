//https://takeuforward.org/plus/dsa/problems/detect-a-cycle-in-an-undirected-graph?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

class Solution {
public:
    bool isCycle(int V, vector<int> adj[]) {
        
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
    
    vector<int> adj[];
    vector<int> curr_row;
    string temp = "";

    for(char c : s) {
        if(c >= '0' && c <= '9')
            temp += c;

        if((c == ',' || c == ']') && !temp.empty()) {
            curr_row.push_back(stoi(temp));
            temp == "";

            if(c == ']') {
                adj.push_back(curr_row);
                curr_row.clear();
            }
        }
    }

    Solution sol;
    bool ans = sol.isCycle(V, adj);
    cout << (ans ? "True" : "False");

    return 0;
}