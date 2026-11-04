#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, x, y;
        cin >> n >> x >> y;

        int l = lcm(x, y);

        int cnt1 = (n / x) - (n / l);
        int cnt2 = (n / y) - (n / l);

        int sum1 = cnt1 * (2 * n - cnt1 + 1) / 2;
        int sum2 = cnt2 * (cnt2 + 1) / 2;

        cout << sum1 - sum2 << '\n';
    }

    return 0;
}