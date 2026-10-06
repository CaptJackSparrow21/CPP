#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;
        int ans = 0;
        for(int i=1; i<=n; i++) {
            if(i % 2)
                ans += b;
            else 
                ans += a;
        }
        cout << ans << '\n';
    }

    return 0;
}