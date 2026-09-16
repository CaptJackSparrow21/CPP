#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int a, x, y;
        cin >> a >> x >> y;

        if((x < a && y < a) || (x > a && y > a))
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}