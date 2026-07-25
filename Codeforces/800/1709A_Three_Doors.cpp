#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int x, a[4] = {};
        cin >> x >> a[1] >> a[2] >> a[3];

        bool open[4] = {};
        int curr = x, cnt = 0;
        while(curr && !open[curr]) {
            open[curr] = true;
            cnt++;
            curr = a[curr];
        }

        cout << ((cnt == 3) ? "YES\n" : "NO\n");
    }

    return 0;
}