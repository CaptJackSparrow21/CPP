//https://takeuforward.org/plus/dsa/problems/ninja's-training?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

class Solution {
public:
    int ninjaTraining(vector<vector<int>> &matrix) {
        
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);

    vector<vector<int>> matrix;
    vector<int> row;
    string temp;
    for(char c : s) {
        if(isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            row.push_back(stoll(temp));
            temp = "";

            if(c == ']') {
                matrix.push_back(row);
                row.clear();
            }
        }
    }

    Solution sol;
    cout << sol.ninjaTraining(matrix);

    return 0;
}