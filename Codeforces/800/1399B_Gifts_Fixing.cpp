#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll> a(n), b(n);
        for(ll i=0; i<n; i++) cin >> a[i];
        for(ll i=0; i<n; i++) cin >> b[i];

        ll min1 = *min_element(a.begin(), a.end());
        ll min2 = *min_element(b.begin(), b.end());

        ll count = 0;
        for(ll i=0; i<n; i++) {
            count += max(a[i] - min1, b[i] - min2);
        }
        cout << count << endl;
    }

    return 0;
}