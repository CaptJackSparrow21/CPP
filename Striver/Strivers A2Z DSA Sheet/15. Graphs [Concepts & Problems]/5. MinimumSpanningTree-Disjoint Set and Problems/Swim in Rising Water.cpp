//https://takeuforward.org/plus/dsa/problems/swim-in-rising-water?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//
class Solution {
public:
    int swimInWater(vector<vector<int>> &grid) {

    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    
    vector<vector<int>> grid;
    vector<int> row;
    string temp = "";
    for(char c : s) {
        if(c == '-' || isdigit(c)) 
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoll(temp));
            temp = "";

            if(c == ']') {
                grid.push_back(row);
                row.clear();
            }
        }
    }

    Solution sol;
    cout << sol.swimInWater(grid);

    return 0;
}