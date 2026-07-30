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
        sort(a.begin(), a.end());
        
        if((a.front() + a.back()) % 2 == 0) {
            cout << 0 << '\n';
            continue;
        }

        int ans = n;

        for(int i=0; i<n; i++) {
            if((a[i] & 1) == (a.back() & 1)) {
                ans = min(ans, i);
                break;
            }
        }

        for(int i=n-1; i>=0; i--) {
            if((a[i] & 1) == (a.front() & 1)) {
                ans = min(ans, n - i - 1);
                break;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}