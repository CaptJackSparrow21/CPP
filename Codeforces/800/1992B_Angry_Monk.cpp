#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
       ll n, k;
        cin >> n >> k;
        ll mx = 0;
        for(int i=0; i<k; i++) {
            ll x; cin >> x;
            mx = max(mx, x);
        }

        cout << (2 * (n - mx)) - (k - 1) << endl;
    }

    return 0;
}