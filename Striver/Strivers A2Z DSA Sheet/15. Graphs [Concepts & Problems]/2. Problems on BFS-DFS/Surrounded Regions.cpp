//https://takeuforward.org/plus/dsa/problems/surrounded-regions?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

class Solution {
public:
    vector<vector<char>> fill(vector<vector<char>> mat) {

    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    string s;
    getline(cin, s);
    vector<vector<char>> mat;
    vector<char> curr_row;
    string temp = "";

    for(char c : s) {
        if(isalpha(c))
            temp += c;

        if((c == ',' || c == ']') && !temp.empty()) {
            curr_row.push_back(temp);
            temp = "";

            if(c == ']') {
                mat.push_back(curr_row);
                curr_row.clear();
            }
        }
    }

    Solution sol;
    vector<vector<char>> ans = sol.fill(mat);

    cout << "["


    return 0;
}