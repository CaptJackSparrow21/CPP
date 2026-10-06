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
        int ans = 0;
        int zero = 0;
        for(int i=0; i<n; i++) {
            int x; cin >> x;
            if(x == 0)
                zero++;
            else {
                ans += x;
            }
        }

        cout << ans + zero << '\n';
        
    }

    return 0;
}