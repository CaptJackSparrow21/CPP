#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x, y, k;
    cin >> x >> y >> k;

    bool ok = false;
    for(int i=1; i<=x; i++) {
        if(i * y == k) {
            ok = true;
            break;
        }
    }

    cout << (ok ? "YES\n" : "NO\n");

    return 0;
}