//https://takeuforward.org/practice/dsa/palindrome-partitioning-ii-

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = SC = O(n^2)
class Solution {
public:
    int minCut(string s) {
        int n = s.size();
        vector<vector<bool>> pal(n, vector<bool> (n, false));
        vector<int> dp(n);

        for(int i=n-1; i>=0; i--) {
            for(int j=i; j<n; j++) {
                if(s[i] == s[j] && (j - i <= 2 || pal[i+1][j-1]))
                    pal[i][j] = true;
            }
        }

        for(int j=0; j<n; j++) {
            dp[j] = j;

            for(int i=0; i<=j; i++) {
                if(pal[i][j]) {
                    if(i == 0)
                        dp[j] = 0;
                    else 
                        dp[j] = min(dp[j], dp[i-1] + 1);
                }
            }
        }
        return dp[n-1];
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    Solution sol;
    cout << sol.minCut(s);

    return 0;
}