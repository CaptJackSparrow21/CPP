//https://takeuforward.org/plus/dsa/problems/unique-paths-ii?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = SC = O(m * n)
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>> &matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>> dp(m, vector<int> (n, 0));

        if(matrix[0][0] == 1)   
            return 0;

        dp[0][0] = 1;

        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(matrix[i][j] == 1)
                    dp[i][j] = 0;
                else if(i == 0 && j == 0)
                    dp[i][j] = 1;
                else {
                    int up = 0, left = 0;
                    if(i > 0)
                        up = dp[i-1][j];
                    if(j > 0)
                        left = dp[i][j-1];
                    dp[i][j] = up + left;
                }
            }
        }
        return dp[m-1][n-1];
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
    cout << sol.uniquePathsWithObstacles(matrix);

    return 0;
}