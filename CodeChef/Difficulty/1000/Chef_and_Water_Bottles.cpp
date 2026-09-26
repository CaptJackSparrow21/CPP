#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, x, k;
        cin >> n >> x >> k;
        int b = k / x;
        if(b < n) cout << b << '\n';
        else if(b >= n) cout << n << '\n';
    }

    return 0;
}