#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    long double x = b * logl(a);
    long double y = d * logl(c);

    cout << (x > y ? "YES" : "NO");

    return 0;
}