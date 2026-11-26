#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<int> cnt(m, 0);

        for(int i=0; i<n; i++) {
            int x; cin >> x;
            cnt[x % m]++;
        }

        int ans = 0;

        if(cnt[0] > 0)
            ans++;

        for(int i=1; i<=m/2; i++) {
            int x = cnt[i];
            int y = cnt[m - i];

            if(x == 0 && y == 0)
                continue;

            if(i == m - i) {
                ans++;
                continue;
            }

            ans += 1 + max(0LL, abs(x - y) - 1);
        }
        cout << ans << '\n';
    }

    return 0;
}