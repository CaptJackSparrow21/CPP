#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    int mx = (n - m + 1) * (n - m) / 2;

    int q = n / m;
    int r = n % m;

    int first = r * (q + 1) * q / 2;
    int second = (m - r) * q * (q - 1) / 2;
    int mn = first + second;

    cout << mn << ' ' << mx;

    return 0;
}