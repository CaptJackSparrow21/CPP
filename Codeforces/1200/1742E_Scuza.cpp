#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, q;
    cin >> n >> q;

    vector<int> pref(n + 1, 0), mx(n);

    for(int i=0; i<n; i++) {
        int x; cin >> x;
        pref[i + 1] = pref[i] + x;
        mx[i] = (i == 0 ? x : max(mx[i-1], x));
    }

    while(q--) {
        int k; cin >> k;
        int ind = upper_bound(mx.begin(), mx.end(), k) - mx.begin();
        cout << pref[ind] << ' ';
    }

    cout << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) 
        solve();

    return 0;
}