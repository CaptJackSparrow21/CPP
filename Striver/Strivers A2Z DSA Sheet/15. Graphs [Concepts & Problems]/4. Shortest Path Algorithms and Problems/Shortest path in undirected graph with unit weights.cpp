//https://takeuforward.org/plus/dsa/problems/shortest-path-in-undirected-graph-with-unit-weights?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

class Solution {
public:
    vector<int> shortestPath(vector<vector<int>> &edges, 
                                            int N, int M) {
        
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    cin >> N;
    cin >> M;
    cin.ignore();

    string s;
    getline(cin, s);

    vector<vector<int>> edges;
    vector<int> row;
    string temp = "";

    for(char c : s) {
        if(c >= 0 && c <= 9)
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoi(temp));
            temp = "";

            if(c == ']') {
                edges.push_back(row);
                row.clear();
            }
        }
    }

    Solution sol;
    vector<int> ans = sol.shortestPath(edges, N, M);

    cout << '[';
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i];
        if(i+1 != ans.size())
            cout << ',';
    }
    cout << ']';

    return 0;
}