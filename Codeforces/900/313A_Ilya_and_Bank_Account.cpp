#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;

    int ans = n;
    ans = max(ans, n / 10);
    ans = max(ans, (n / 100) * 10 + n % 10);

    cout << ans;

    return 0;
}