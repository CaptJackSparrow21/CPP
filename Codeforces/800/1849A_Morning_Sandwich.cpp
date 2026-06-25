#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int b, c, h;
        cin >> b >> c >> h;

        cout << min(2 * b - 1, 2 *(c+h) + 1) << '\n';
    }

    return 0;
}