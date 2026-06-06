#include<bits/stdc++.h>
using namespace std;
#define ll long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll> a(n);
        for(ll &i : a) cin >> i;
        ll sum = accumulate(a.begin(), a.end(), 0);
        if(sum % n != 0) {
            cout << -1 << "\n";
        }
        else {
            ll cnt = 0;
            for(ll i=0; i<n; i++) {
            if(a[i] > (sum / n))
                cnt++;
        
            }
        cout << cnt << "\n";
        }        
    }

    return 0;
}