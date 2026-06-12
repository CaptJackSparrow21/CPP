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

        sort(a.rbegin(), a.rend());
        int mx = 0;
        for(int i=1; i<n; i+=2) {
            mx = max(mx, a[i-1] - a[i]);
        }
        cout << mx << '\n';
    }

    return 0;
}