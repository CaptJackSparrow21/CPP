#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;

        vector<int> x(n + 1), pref(n + 1, 0);

        for(int i=1; i<=n; i++) {
            cin >> x[i];
            pref[i] = pref[i - 1] + x[i];
        }

        int ans = LLONG_MAX;

        for(int i=0; i<=n; i++) {
            int cost = (a + b) * x[i] +
                        b * (pref[n] - pref[i] - (n - i) * x[i]);

            ans = min(ans, cost);
        }

        cout << ans << '\n';
    }

    return 0;
}