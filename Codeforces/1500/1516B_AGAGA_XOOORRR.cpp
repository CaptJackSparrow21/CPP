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
        vector<int> a(n);
        int total = 0;

        for(int i=0; i<n; i++) {
            cin >> a[i];
            total ^= a[i];
        }

        if(total == 0) {
            cout << "YES\n";
            continue;
        }

        int xr = 0, cnt = 0;
        bool ans = false;

        for(int i=0; i<n-1; i++) {
            xr ^= a[i];

            if(xr == total) {
                cnt++;
                xr = 0;
            }

            if(cnt == 2) {
                ans = true;
                break;
            }
        }

        cout << (ans ? "YES\n" : "NO\n");
    }

    return 0;
}