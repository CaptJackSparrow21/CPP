//https://takeuforward.org/plus/dsa/problems/number-of-ways-to-arrive-at-destination?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O((V + E) log V)
//SC = O(V + E)
#define const int mod = 1e9 + 7;
class Solution {
public:
    int countPaths(int n, vector<vector<int>> &roads) {

    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m; 
    cin >> n;
    cin >> m;

    string s; 
    getline(cin, s);
    vector<vector<int>> roads;
    vector<int> row;
    string temp = "";

    for(char c : s) {
        if(c >= '0' && c <= '9')
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoi(temp));
            temp = "";

            if(c == ']') {
                roads.push_back(row);
                row.clear();
            }
        }
    }

    Solution sol;
    cout << sol.countPaths(roads);

    return 0;
}