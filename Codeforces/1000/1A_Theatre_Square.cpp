#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, a;
    cin >> n >> m >> a;

    int ans1 = (n + a - 1) / a;
    int ans2 = (m + a - 1) / a;
    cout << ans1 * ans2;

    return 0;
}