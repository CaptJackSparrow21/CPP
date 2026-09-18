#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    while(n--) {
        int x, y;
        cin >> x >> y;

        cout << ((y >= -1) ? "YES\n" : "NO\n");
    }

    return 0;
}