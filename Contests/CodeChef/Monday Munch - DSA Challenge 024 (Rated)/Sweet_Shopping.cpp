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
        int cost = 0, ans = 0;
        for(int i=0; i<n; i++) {
            int x; cin >> x;
            if(cost + x <= m) {
                cost += x;
                ans++;
            }
            else {
                cost = 0;
                ans = 0;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}