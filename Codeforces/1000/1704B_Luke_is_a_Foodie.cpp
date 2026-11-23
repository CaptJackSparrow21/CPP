#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for(int &i : a) cin >> i;

        int l = a[0] - x;
        int r = a[0] + x;
        int ans = 0;

        for(int i=1; i<n; i++) {
            l = max(l, a[i] - x);
            r = min(r, a[i] + x);

            if(l > r) {
                ans++;
                l = a[i] - x;
                r = a[i] + x;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}