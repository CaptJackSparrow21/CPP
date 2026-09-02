//https://takeuforward.org/plus/dsa/problems/ninja's-training?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n) && SC = O(1)
class Solution {
public:
    int ninjaTraining(vector<vector<int>> &matrix) {
        vector<int> prev(4);

        prev[0] = max(matrix[0][1], matrix[0][2]);
        prev[1] = max(matrix[0][0], matrix[0][2]);
        prev[2] = max(matrix[0][0], matrix[0][1]);
        prev[3] = max({matrix[0][0], matrix[0][1], matrix[0][2]});

        for(int day = 1; day < matrix.size(); day++) {
            vector<int> curr(4);

            for(int last=0; last < 4; last++) {
                for(int activity = 0; activity < 3; activity++) {
                    if(activity != last)
                        curr[last] = max(curr[last],
                            matrix[day][activity] + prev[activity]);
                }
            }
            prev = curr;
        }
        return prev[3];
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