#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, l;
    cin >> n >> l;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    sort(a.begin(), a.end());
    double ans = max(a[0], l - a[n-1]);

    for(int i=1; i<n; i++)
        ans = max(ans, (a[i] - a[i-1]) / 2.0);

    cout << fixed << setprecision(10) << ans << '\n';

    return 0;
}