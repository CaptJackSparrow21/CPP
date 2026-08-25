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
        int ans = 0;
        while(n > 0) {
            ans += n % 10;
            n /= 10;
        }
        cout << ans << '\n';
    }

    return 0;
}