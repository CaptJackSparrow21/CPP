#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int &i : a) cin >> i;
        sort(a.rbegin(), a.rend());
        int ans = 0;
        for(int i=0; i<k; i++)
            ans += a[i];
        cout << ans << '\n';
    }

    return 0;
}