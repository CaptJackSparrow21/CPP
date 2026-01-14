#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll count = 0;
        for (ll i=0; i<n-1; i++) {
            ll x;
            cin >> x;
            count += x;
        }
        cout << -count << endl;
    }

    return 0;
}