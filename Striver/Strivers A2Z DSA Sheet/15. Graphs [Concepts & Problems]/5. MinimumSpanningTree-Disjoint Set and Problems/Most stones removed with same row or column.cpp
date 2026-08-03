//https://takeuforward.org/plus/dsa/problems/most-stones-removed-with-same-row-or-column?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//
class Solution {
public:
    int maxRemove(vector<vector<int>> &stones, int n) {

    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    cin.ignore();
    string s;
    getline(cin, s);
    
    vector<vector<int>> stones;
    vector<int> row;
    string temp = "";
    for(char c : s) {
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoll(temp));
            temp = "";

            if(c == ']') {
                stones.push_back(row);
                row.clear();
            }
        }
    }

    Solution sol;
    cout << sol.maxRemove(stones, n);

    return 0;
}