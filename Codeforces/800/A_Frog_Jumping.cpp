#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int a, b, k;
        cin >> a >> b >> k;

        int ans = 0;
        for(int i=0; i<k; i++) {
            if(i % 2 == 0) 
                ans += a;
            else 
                ans -= b;
        }
        cout << ans << '\n';
    }

    return 0;
}