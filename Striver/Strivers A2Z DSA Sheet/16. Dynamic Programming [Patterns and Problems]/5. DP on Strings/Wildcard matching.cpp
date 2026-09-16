//https://takeuforward.org/plus/dsa/problems/wildcard-matching?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = SC = O(n * m)
class Solution {
public:
    bool wildCard(string str, string pat) {
        int n = str.size();
        int m = pat.size();

        vector<vector<bool>> dp(n+1, vector<bool> (m+1, false));

        dp[0][0] = true;

        for(int j=1; j<=m; j++) {
            if(pat[j-1] == '*')
                dp[0][j] = dp[0][j-1];
        }

        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                if(str[i-1] == pat[j-1] || pat[j-1] == '?')
                    dp[i][j] = dp[i-1][j-1];
                else if(pat[j-1] == '*')
                    dp[i][j] = dp[i][j-1] || dp[i-1][j];
                else 
                    dp[i][j] = false;
            }
        }
        return dp[n][m];
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str, pat;
    cin >> str >> pat;
    Solution sol;
    cout << boolalpha << sol.wildCard(str, pat);

    return 0;
}