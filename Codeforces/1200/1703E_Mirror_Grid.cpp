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

        vector<string> a(n);
        for(auto &s : a) cin >> s;

        int ans = 0;

        for(int i=0; i<n/2; i++) {
            for(int j=0; j<(n+1)/2; j++) {
                int ones = (a[i][j] - '0') +
                           (a[j][n - 1 - i] - '0') +
                           (a[n - 1 - i][n - 1 - j] - '0') +
                           (a[n - 1 - j][i] - '0');

                ans += min(ones, 4 - ones);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}