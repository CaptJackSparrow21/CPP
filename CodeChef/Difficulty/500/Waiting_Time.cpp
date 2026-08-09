#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int k, x;
        cin >> k >> x;
        cout << 7 * k - x << '\n';
    }

    return 0;
}