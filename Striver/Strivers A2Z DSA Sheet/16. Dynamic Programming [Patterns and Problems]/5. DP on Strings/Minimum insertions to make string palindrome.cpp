//https://takeuforward.org/plus/dsa/problems/minimum-insertions-to-make-string-palindrome?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = SC = O(n^2)
class Solution {
public:
    int minInsertion(string s) {
        int n = s.size();
        string rev = s;
        reverse(rev.begin(), rev.end());
        vector<vector<int>> dp(n+1, vector<int> (n+1, 0));

        for(int i=1; i<=n; i++) {
            for(int j=1; j<=n; j++) {
                if(s[i-1] == rev[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                else 
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        int lps = n - dp[n][n];
        return lps;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    Solution sol;
    cout << sol.minInsertion(s);

    return 0;
}