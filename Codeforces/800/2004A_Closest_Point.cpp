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
        for(ll &i : a)  cin >> i;

        if(n == 2 && (a[1] - a[0]) > 1)
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}