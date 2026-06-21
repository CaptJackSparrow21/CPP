#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int l, r, m;
    cin >> l >> r >> m;

    int ans = 1;
    for(int i=l; i<=r; i++) {
        ans *= ((i % m)) % m;
    }

    cout << ans % m;

    return 0;
}