#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    double r; cin >> r;
    double pi = 3.141592653;

    double ans = pi * r * r;

    cout << fixed << setprecision(9) << ans;

    return 0;
}