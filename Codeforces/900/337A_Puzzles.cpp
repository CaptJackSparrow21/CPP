#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> a(m);
    for(int &i : a) cin >> i;
    sort(a.begin(), a.end());

    int ans = LLONG_MAX;
    for(int i=0; i+n-1 < m; i++) 
        ans = min(ans, a[i+n-1] - a[i]);

    cout << ans;

    return 0;
}