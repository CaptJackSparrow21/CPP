#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int x, a, b;
        cin >> x >> a >> b;
        cout << ((x <= a + (2 * b)) ? "Qualify\n" : "NotQualify\n");
    }

    return 0;
}