#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;

    int bg = min({k2, k5, k6});
    k2 -= bg;
    int sml = min(k3, k2);

    cout << bg * 256 + sml * 32;

    return 0;
}