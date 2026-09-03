//https://takeuforward.org/plus/dsa/problems/ninja-and-his-friends?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//
class Solution {
public:
    int maxChocolates(vector<vector<int>> &g) {
        
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);

    vector<vector<int>> g;
    vector<int> row;
    string temp;
    for(char c : s) {
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoll(temp));
            temp = "";

            if(c == ']') {
                g.push_back(row);
                row.clear();
            }
        }
    }

    Solution sol;
    cout << sol.maxChocolates(g);

    return 0;
}