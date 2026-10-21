#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, x, p;
        cin >> n >> x >> p;
        int w = n - x;
        int ans = (3 * x) - w;
        cout << ((ans >= p) ? "PASS\n" : "FAIL\n");
    }

    return 0;
}