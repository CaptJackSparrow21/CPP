#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;

        if((a + b <= d && c <= e) ||
            (a + c <= d && b <= e) ||
            (b + c <= d && a <= e)) 
                cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}