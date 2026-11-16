#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int a, b, n;
        cin >> a >> b >> n;

        int ans = b;

        for(int i=0; i<n; i++) {
            int x; cin >> x;
            ans += min(x, a - 1);
        }

        cout << ans << '\n';
    }

    return 0;
}