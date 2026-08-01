#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    cout << __builtin_popcount(n);

    // int ans = 0;
    // while(n) {
    //     n = n & (n - 1);
    //     ans++;
    // }

    // cout << ans;

    return 0;
}