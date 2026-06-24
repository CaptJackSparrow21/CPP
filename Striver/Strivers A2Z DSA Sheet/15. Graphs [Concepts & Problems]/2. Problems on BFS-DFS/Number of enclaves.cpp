//https://takeuforward.org/plus/dsa/problems/number-of-enclaves?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long


class Solution {
public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);

    vector<vector<int>> grid;
    vector<int> curr_row;
    string temp = "";

    for(char c : s) {
        if(c >= '0' && c <= '9')
            temp += c;

        if((c == ',' || c == ']') && !temp.empty()) {
            curr_row.push_back(stoi(temp));
            temp = "";

            if(c == ']') {
                grid.push_back(curr_row);
                curr_row.clear();
            }
        }
    }

    Solution sol;
    cout << sol.numberOfEnclaves(grid);

    return 0;
}