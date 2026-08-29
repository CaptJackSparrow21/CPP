#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int ans = 0;
        int need = (3 - b % 3) % 3;

        if(need > c) {
            cout << -1 << '\n';
            continue;
        }

        c -= need;
        b += need;
        ans = a + (b / 3) + (c + 2) / 3;

        cout << ans << '\n';
    }

    return 0;
}