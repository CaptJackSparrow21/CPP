#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int x, y, z;
        cin >> x >> y >> z;
        cout << ((z > (x * y) / 2) ? "YES\n" : "NO\n");
    }

    return 0;
}