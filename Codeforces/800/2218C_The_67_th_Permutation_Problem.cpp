#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        for(int i=1; i<=n; i++) {
            cout << i << ' '
                 << (3 * n) - (2 * i) + 1 << ' '
                 << (3 * n) - (2 * i) + 2 << ' ';
        }

        cout << '\n';
    }

    return 0;
}