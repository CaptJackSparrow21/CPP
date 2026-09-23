//https://leetcode.com/problems/count-square-submatrices-with-all-ones/description/

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = SC = O(n * m)
class Solution {
public:
    int countSquares(vector<vector<int>> &matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<vector<int>> dp(n, vector<int> (m));
        int ans = 0;

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(matrix[i][j] == 1) {
                    if(i == 0 || j == 0)
                        dp[i][j] = 1;
                    else 
                        dp[i][j] = 1 + min({
                            dp[i-1][j],
                            dp[i][j-1],
                            dp[i-1][j-1]
                        });

                    ans += dp[i][j];
                }
            }
        }
        return ans;
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
    cout << sol.countSquares(matrix);

    return 0;
}