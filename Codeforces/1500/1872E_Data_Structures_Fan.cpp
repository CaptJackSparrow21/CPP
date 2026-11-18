#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        vector<int> a(n + 1), pref(n + 1, 0);

        for(int i=1; i<=n; i++) {
            cin >> a[i];
            pref[i] = pref[i - 1] ^ a[i];
        }

        string s; cin >> s;
        int xr0 = 0, xr1 = 0;

        for(int i=0; i<n; i++) {
            if(s[i] == '0')
                xr0 ^= a[i + 1];
            else
                xr1 ^= a[i + 1];
        }

        int q; cin >> q;
        while(q--) {
            int type; cin >> type;
            if(type == 1) {
                int l, r;
                cin >> l >> r;

                int val = pref[r] ^ pref[l - 1];
                
                xr0 ^= val;
                xr1 ^= val;
            }
            else {
                int g; cin >> g;

                cout << (g == 0 ? xr0 : xr1) << " ";
            }
        }
        cout << '\n';
    }

    return 0;
}