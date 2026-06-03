#include<bits/stdc++.h>
using namespace std;
#define ll long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, q;
    cin >> n >> q;
    vector<ll> pref(n+1, 0);

    for(ll i=1; i<=n; i++) {
        ll x; cin >> x;
        pref[i] = pref[i-1] + x;
    }

    while(q--) {
        ll l, r;
        cin >> l >> r;

        cout << pref[r] - pref[l-1] << '\n';
    }
    

    return 0;
}