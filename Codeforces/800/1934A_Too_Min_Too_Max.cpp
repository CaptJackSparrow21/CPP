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
        int i = a[0], j = a[n-1], k = a[1], l = a[n-2];
        int ans = abs(i - j) + abs(j - k) + abs(k - l) + abs(l - i);
        cout << ans << '\n';
    }

    return 0;
}