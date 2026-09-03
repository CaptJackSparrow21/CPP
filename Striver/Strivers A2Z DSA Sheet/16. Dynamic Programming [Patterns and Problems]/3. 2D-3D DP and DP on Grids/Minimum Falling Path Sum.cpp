//https://takeuforward.org/plus/dsa/problems/minimum-falling-path-sum?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n * m) && SC = O(m)
class Solution {
public:
    int minFallingPathSum(vector<vector<int>> &matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> prev = matrix[0];

        for(int i=1; i<n; i++) {
            vector<int> curr(m);
            for(int j=0; j<m; j++) {
                int best = prev[j];

                if(j > 0)   
                    best = min(best, prev[j-1]);
                
                if(j + 1 < m)
                    best = min(best, prev[j+1]);

                curr[j] = matrix[i][j] + best;
            }
            prev = curr;
        }
        return *min_element(prev.begin(), prev.end());
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
        if(c == '-' || isdigit(c))
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
    cout << sol.minFallingPathSum(matrix);

    return 0;
}