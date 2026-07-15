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
        vector<int> b;
        for(int &i : a) cin >> i;
        for(int i=0; i<n-1; i++) {
            int mx = max(a[i], a[i+1]);
            b.push_back(mx);
        }

        int ans = *min_element(b.begin(), b.end());
        cout << ans - 1 << '\n';
    }

    return 0;
}