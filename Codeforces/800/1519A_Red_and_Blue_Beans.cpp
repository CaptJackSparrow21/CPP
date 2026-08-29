#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int r, b, d;
        cin >> r >> b >> d;
        int mx = max(r, b);
        int mn = min(r, b);

        if((mx + mn - 1) / mn <= d + 1)
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}