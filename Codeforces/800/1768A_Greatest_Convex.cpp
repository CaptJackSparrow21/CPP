#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int k; cin >> k;
        if(k == 1)
            cout << -1 << '\n';
        else 
            cout << k - 1 << '\n';
    }

    return 0;
}