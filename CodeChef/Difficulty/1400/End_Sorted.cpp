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
        int pos1, posN;
        for(int i=1; i<=n; i++) {
            int x; cin >> x;
            if(x == 1) pos1 = i;
            if(x == n) posN = i;
        }

        int ans = (pos1 - 1) + (n - posN);

        if(pos1 > posN)
            ans--;

        cout << ans << '\n';
    }

    return 0;
}