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

        if(a > b)
            cout << ((a ^ 1) == b ? y : -1) << '\n';
        else {
            int c0 = b - a;
            int c1 = ((b + 1) / 2) - ((a + 1) / 2);

            if(y >= x)
                cout << c0 * x << '\n';
            else
                cout << (c0 - c1) * x + c1 * y << '\n';
        }
    }

    return 0;
}