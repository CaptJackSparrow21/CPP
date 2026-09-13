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
        int mx1 = 0, mx2 = 0;
        for(int i=0; i<n; i++) {
            int x; cin >> x;

            if(x > mx1) {
                mx2 = mx1;
                mx1 = x;
            }
            else if(x > mx2)
                mx2 = x;
        }

        cout << (mx1 - mx2 <= 1 ? "YES\n" : "NO\n");
    }

    return 0;
}