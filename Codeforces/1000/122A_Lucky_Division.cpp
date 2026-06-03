#include<bits/stdc++.h>
using namespace std;
#define ll long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n; cin >> n;
    bool ok = false;
    vector<int> lucky = {
        4, 7, 44, 47, 74, 77, 
        444, 447, 474, 477,
        744, 747, 774, 777
    };

    for(int x : lucky) {
        if(n % x == 0) 
            ok = true;
    }

    cout << (ok ? "YES\n" : "NO\n");

    return 0;
}