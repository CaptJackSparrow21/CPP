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
        int odd = (n + 1) / 2;
        int even = n / 2;

        cout << 2 * even * odd << '\n';
    }

    return 0;
}