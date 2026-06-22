#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int a, b, k;
        cin >> a >> b >> k;

        int ans = a * ((k+1) / 2);
        ans -= b * (k / 2);
        cout << ans << '\n';
    }

    return 0;
}