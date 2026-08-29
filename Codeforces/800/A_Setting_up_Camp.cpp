#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int ans = 0;
        ans += a;
        if(b % 3 == 0) {
            ans += b / 3;
            ans += (c + 2) / 3;
        }
        else {
            if((b + c) % 3 == 0)    
                ans += (b + c) / 3;
        }

        cout << ans << '\n';
    }

    return 0;
}