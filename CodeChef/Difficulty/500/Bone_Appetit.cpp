#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, x, y;
    cin >> n >> m;
    cin >> x >> y;

    cout << (n * x) + (m * y);

    return 0;
}