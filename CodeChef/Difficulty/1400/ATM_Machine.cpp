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
        for(int i=1; i<=n; i++) {
            int x; cin >> x;
            if(x <= k) {
                cout << 1;
                k -= x;
            }
            else 
                cout << 0;
        }
        cout << '\n';
    }

    return 0;
}