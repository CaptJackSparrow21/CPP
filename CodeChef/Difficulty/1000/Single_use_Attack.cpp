#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int h, x, y;
        cin >> h >> x >> y;
        int first = h - y;
        cout << 1 + (first + x - 1) / x << '\n';
    }

    return 0;
}