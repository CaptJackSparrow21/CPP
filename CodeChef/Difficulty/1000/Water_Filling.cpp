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
        int one = 0;
        if(a == 1) one++;
        if(b == 1) one++;
        if(c == 1) one++;

        cout << ((one <= 1) ? "Water filling time\n" : "Not now\n");
    }

    return 0;
}