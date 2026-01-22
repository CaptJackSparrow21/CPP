#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t; cin >> t;
    while(t--) {
        ll n, m;
        cin >> n >> m;
        cout << (min(2LL, n-1)) * m << endl;
    }

    // ll t; cin >> t;
    // while(t--) {
    //     ll n,m;
    //     cin >> n >> m;
    //     if(n == 1) cout << "0\n";
    //     else if(n == 2) cout << m << endl;
    //     else if(n > 2) cout << 2 * m << endl;
    // }

    return 0;
}