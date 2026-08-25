#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x, n, m;
    cin >> x >> n >> m;
    cout << ((x + m) >= n ? "YES\n" : "NO\n");

    return 0;
}