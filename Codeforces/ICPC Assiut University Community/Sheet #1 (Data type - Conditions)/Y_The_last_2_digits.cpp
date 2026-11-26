#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int ans = 1;
    ans = ans * (a % 100) % 100;
    ans = ans * (b % 100) % 100;
    ans = ans * (c % 100) % 100;
    ans = ans * (d % 100) % 100;

    cout << setw(2) << setfill('0') << ans;

    return 0;
}