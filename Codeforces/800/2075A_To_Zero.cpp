#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int d = k - 1;
        int ans;

        if(n % 2 == 0)
            ans = (n + d - 1) / d;
        else {
            n -= k;
            ans = 1 + (n + d - 1) / d;
        }
        cout << ans << '\n';
    }

    return 0;
}