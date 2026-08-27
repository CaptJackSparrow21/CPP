#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        long double avg = (a + b) / 2.0;
        cout << (avg > c ? "YES\n" : "NO\n");
    }

    return 0;
}