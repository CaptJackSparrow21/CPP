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
        cout << a[n-1] + a[n-2] << '\n';

        // int n; cin >> n;
        // int prev = 0;
        // for(int i=0; i<n-1; i++) {
        //     int x; cin >> x;
        //     prev = max(x, prev);
        // }
        // int last; cin >> last;
        // cout << prev + last << '\n';
    }

    return 0;
}