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
        int sum = 0, mx = LLONG_MIN;
        for(int i=0; i<n; i++) {
            int x; cin >> x;

            sum += x;
            mx = max(mx, x);
        }

        double ans = mx + (double)(sum - mx) / (n - 1);
        cout << fixed << setprecision(9) << ans << '\n';

    }

    return 0;
}