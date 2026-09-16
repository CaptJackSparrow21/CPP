#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, x, y;
        cin >> n >> x >> y;
        if(y == 0 || ((y % x == 0) && (y / x <= n)))
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}