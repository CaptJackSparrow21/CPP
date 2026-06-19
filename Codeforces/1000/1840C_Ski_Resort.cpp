#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, k, q;
        cin >> n >> k >> q;

        int ans = 0, cnt = 0;
        for(int i=0; i<n; i++) {
            int x; cin >> x;

            if(x <= q) {
                cnt++;

                if(cnt >= k)
                    ans += cnt - k + 1;
            }
            else 
                cnt = 0;
        }
        cout << ans << '\n';
    }

    return 0;
}