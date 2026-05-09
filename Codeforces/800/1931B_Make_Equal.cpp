#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n; cin >> n;

    vector<ll> a(n);
    for(ll &i : a) cin >> i;
    ll sum = 0;
    for(ll x : a)
        sum += x;
        
    ll k = sum / n;

    for(int i=0; i<n-1; i++) {
        if(a[i] < k) {
            cout << "NO\n";
            return;
        }

        a[i+1] += a[i] - k;
        a[i] = k;
    }
    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}