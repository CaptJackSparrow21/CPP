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
        cin >> a >> b ;
        cin >> c >> d;

        bool ok = false;
        for(int i=0; i<4; i++) {
            if(a < b && c < d && a < c && b < d)
                ok = true;
            else  {
                int na = c;
                int nb = a;
                int nc = d;
                int nd = b;

                a = na;
                b = nb;
                c = nc;
                d = nd;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}