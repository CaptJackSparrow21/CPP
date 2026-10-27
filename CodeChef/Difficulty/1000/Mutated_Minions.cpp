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
        int ans = 0;
        for(int i=0; i<n; i++) {
            int x; cin >> x;
            x += k;
            if(x % 7 == 0)
                ans++;
        }
        cout << ans << '\n';
    }

    return 0;
}