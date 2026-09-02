//https://takeuforward.org/plus/dsa/problems/grid-unique-paths?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(m * n) && SC = O(n)    
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> dp(n, 1);

        for(int i=1; i<m; i++) {
            for(int j=1; j<n; j++)
                dp[j] += dp[j-1];
        }
        return dp[n-1];
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int m, n;
    cin >> m >> n;
    Solution sol;
    cout << sol.uniquePaths(m, n);

    return 0;
}