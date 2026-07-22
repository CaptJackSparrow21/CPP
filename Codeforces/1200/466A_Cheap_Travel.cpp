#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, a, b;
    cin >> n >> m >> a >> b;

    cout << min({n * a,
                ((n + m - 1) / m) * b,
                (n / m) * b + (n % m) * a});

    return 0;
}