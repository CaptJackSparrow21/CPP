#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        vector<ll> b(7);
        for(ll &i : b) cin >> i;

        ll a1 = b[0];
        ll a2 = b[1];
        ll a3 = b[6] - a1 - a2;

        cout << a1 << ' ' << a2 << ' ' << a3 << endl;
    }

    return 0;
}