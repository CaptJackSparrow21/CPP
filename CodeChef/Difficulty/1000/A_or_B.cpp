#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        int a1 = (500 - x * 2) + (1000 - (x + y) * 4);
        int a2 = (500 - (x + y) * 2) + (1000 - y * 4);
        cout << max(a1, a2) << '\n';
    }

    return 0;
}