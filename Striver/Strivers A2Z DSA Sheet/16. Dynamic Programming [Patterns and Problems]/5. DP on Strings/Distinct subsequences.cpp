//https://takeuforward.org/plus/dsa/problems/distinct-subsequences?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = SC = O(n * m)
class Solution {
public:
    int distinctSubsequences(string s, string t) {
        int n = s.size();
        int m = t.size();
        const int mod = 1e9 + 7;
        vector<vector<int>> dp(n+1, vector<int> (m+1, 0));

        for(int i=0; i<=n; i++)
            dp[i][0] = 1;

        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                if(s[i-1] == t[j-1])
                    dp[i][j] = 
                    (dp[i-1][j-1] + dp[i-1][j]) % mod;
                else 
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[n][m];
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s, t;
    cin >> s >> t;
    Solution sol;
    cout << sol.distinctSubsequences(s, t);

    return 0;
}