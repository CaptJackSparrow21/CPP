#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;

        int x = -min(m, -l);
        int y = x + m;
        cout << x << " " << y << '\n';

    }

    return 0;
}