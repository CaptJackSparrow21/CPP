#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int l, r;
        cin >> l >> r;

        if(l == r)
            cout << (l == 1) << '\n';
        else
            cout << r - l << '\n';
    }

    return 0;
}