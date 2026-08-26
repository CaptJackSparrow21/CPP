#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = 0;
    if(a > 9) ans++;
    if(b > 9) ans++;
    if(c > 9) ans++;
    if(d > 9) ans++;

    cout << ans;

    return 0;
}