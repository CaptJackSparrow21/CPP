#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //TC = O(r)

    ll x; cin >> x;
    ll n = (2 * x) - 2;
    ll r = x - 1;
    r = min(r, n - r);

    ll ans = 1;
    for(ll i=1; i<=r; i++) {
            ans = ans * (n - r + i) / i;
        }

    cout << ans << endl;

    // //TC = O(n^2)
    // ll x; cin >> x;
    // vector<vector<ll>> a(x, vector<ll> (x, 1));

    // for(ll i=1; i<x; i++) {
    //     for(int j=1; j<x; j++) {
    //         a[i][j] = a[i-1][j] + a[i][j-1];
    //     }
    // }

    // cout << a[x-1][x-1] << endl;


    return 0;
}

    

