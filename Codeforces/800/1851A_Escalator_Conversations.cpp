#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, m, k, h;
        cin >> n >> m >> k >> h;
        int ans = 0;
        while(n--) {
            int x; cin >> x;
            int d = abs(x - h);

            if(d != 0 && d % k == 0 && (d / k) <= m-1)
                ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}