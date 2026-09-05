#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        cout << ((a * b <= x * y) ? "Yes\n" : "No\n");
    }

    return 0;
}