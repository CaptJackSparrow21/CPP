#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        if((w == x + y + z) || (w == x + y) ||
            (w == x + z) || (w == y + z) || 
            (w == x) || (w == y) || (w == z))
                cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}