#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int &i : a) cin >> i;
        vector<int> dp(n + 1, 0);
        for(int i=n-1; i>=0; i--) {
            dp[i] = 1 + dp[i + 1];

            if(i + a[i] < n)
                dp[i] = min(dp[i], dp[i + a[i] + 1]);
        }
        cout << dp[0] << '\n';
    }

    return 0;
}