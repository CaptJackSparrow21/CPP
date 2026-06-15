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
        for(int &i : a) cin >> i;
        int ans = 0;
        for(int i=0; i<n-1; i++) {
            int small = min(a[i], a[i+1]);
            int big = max(a[i], a[i+1]);

            while(small * 2 < big) {
                small *= 2;
                ans++;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}