//https://takeuforward.org/practice/dsa/count-palindromic-subsequences

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = SC = O(n^2)
class Solution {
public:
    int countPalSubseq(const string &s) {
        int n = s.size();
        vector<vector<int>> dp(n, vector<int> (n));

        for(int i=0; i<n; i++)
            dp[i][i] = 1;

        for(int len = 2; len <= n; len++) {
            for(int i=0; i + len - 1 < n; i++) {
                int j = i + len - 1;

                if(s[i] == s[j])
                    dp[i][j] = dp[i+1][j] + dp[i][j-1] + 1;
                else    
                    dp[i][j] = dp[i+1][j] + dp[i][j-1] - 
                                dp[i+1][j-1];
            }
        }
        return n == 0 ? 0 : dp[0][n-1];
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    Solution sol;
    cout << sol.countPalSubseq(s);

    return 0;
}