#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int mx = 0, ans = 0;
        while(n--) {
            int x; cin >> x;
            if(mx > x)
                ans++;
            mx = max(mx, x);
        }

        cout << ans << '\n';
    }

    return 0;
}