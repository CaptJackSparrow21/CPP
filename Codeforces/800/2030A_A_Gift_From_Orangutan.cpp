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
        vector<int> b, c;
        int mx = *max_element(a.begin(), a.end());
        int mn = *min_element(a.begin(), a.end());
        b.push_back(mx);

        for(int i=0; i<n-1; i++)
            b.push_back(mn);

        for(int i=0; i<n; i++)
            c.push_back(mx);

        int ans = 0;

        for(int i=0; i<n; i++)
            ans += c[i] - b[i];

        cout << ans << '\n';
    }

    return 0;
}