#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if((a + c) == 180 && (b + d) == 180)
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}