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

        if(n % 2 != 0 || n < 4) {
            cout << -1 << '\n';
            continue;
        }

        int mn = (n + 5) / 6;
        int mx = n / 4;

        cout << mn << ' ' << mx << '\n';
    }

    return 0;
}