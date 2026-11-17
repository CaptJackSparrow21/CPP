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

        int mn = LLONG_MAX, mn2 = LLONG_MAX, sum = 0;

        for(int i=0; i<n; i++) {
            int m; cin >> m;
            vector<int> a(m);
            for(int &i : a) cin >> i;

            sort(a.begin(), a.end());

            mn = min(mn, a[0]);
            mn2 = min(mn2, a[1]);
            sum += a[1];
        }

        cout << sum + mn - mn2 << '\n';

    }

    return 0;
}