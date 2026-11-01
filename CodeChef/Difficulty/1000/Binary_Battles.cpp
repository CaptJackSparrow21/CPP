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

        int ans = 0;
        while(n > 1) {
            n >>= 1;
            ans += a + b;
        }

        cout << ans - b << '\n';
    }

    return 0;
}