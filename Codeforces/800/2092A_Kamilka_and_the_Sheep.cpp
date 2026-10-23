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
        int mx = LLONG_MIN, mn = LLONG_MAX;
        for(int i=0; i<n; i++) {
            int x; cin >> x;
            mx = max(mx, x);
            mn = min(mn, x);
        }

        cout << mx - mn << '\n';
    }

    return 0;
}