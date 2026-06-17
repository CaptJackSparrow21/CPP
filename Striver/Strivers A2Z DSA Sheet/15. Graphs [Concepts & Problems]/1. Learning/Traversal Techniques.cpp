//https://takeuforward.org/plus/dsa/problems/traversal-techniques?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

class Solution {
public:
    vector<int> dfsOfGraph(int V, vector<vector<int>> edges) {

    }

    vector<int> bfsOfGraph(int V, vector<vector<int>> edges) {

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
    
    vector<vector<int>> edges;
    vector<int> curr_row;
    string temp = "";

    for(char c : s) {
        if(c >= '0' && c <= '9')
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            curr_row.push_back(stoi(temp));
            temp = "";

            if(c == ']') {
                edges.push_back(curr_row);
                curr_row.clear();
            }
        }
    }

    Solution sol;
    vector<int>

    return 0;
}