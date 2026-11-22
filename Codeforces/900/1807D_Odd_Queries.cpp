#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for(int &i : a) cin >> i;

        vector<int> pref(n + 1, 0);

        for(int i=1; i<=n; i++) {
            pref[i] = pref[i-1] + a[i-1];
        }

        while(q--) {
            int l, r, k;
            cin >> l >> r >> k;

            int num = pref[n];
            num -= pref[r] - pref[l - 1];
            num += (r - l + 1) * k;

            if(num % 2)    
                cout << "YES\n";
            else 
                cout << "NO\n";
        }
    }

    return 0;
}