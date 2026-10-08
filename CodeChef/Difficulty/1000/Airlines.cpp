#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int x, n;
        cin >> x >> n;
        int need = (n - (100 * x) + 99) / 100;
        cout << ((need <= 0) ? 0 : need) << '\n';
    }

    return 0;
}