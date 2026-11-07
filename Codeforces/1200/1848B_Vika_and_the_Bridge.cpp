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

        vector<vector<int>> pos(k + 1);
        for(int i=1; i<=n; i++) {
            int x; cin >> x;
            pos[x].push_back(i);
        }

        int ans = n;
        for(int c = 1; c <= k; c++) {
            int prev = 0;
            int mx1 = 0, mx2 = 0;

            for(int x : pos[c]) {
                int gap = x - prev - 1;

                if(gap > mx1) {
                    mx2 = mx1;
                    mx1 = gap;
                }
                else if(gap > mx2)
                    mx2 = gap;

                prev = x;
            }

            int gap = n - prev;

            if(gap > mx1) {
                mx2 = mx1;
                mx1 = gap;
            }
            else if(gap > mx2)
                mx2 = gap;

            ans = min(ans, max(mx1 / 2, mx2));
        }
        cout << ans << '\n';
    }

    return 0;
}