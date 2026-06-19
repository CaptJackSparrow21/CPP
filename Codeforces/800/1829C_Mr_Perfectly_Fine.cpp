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
        int b10 = 1e18, b01 = 1e18,  b11 = 1e18;

        while(n--) {
            int m;
            string s;
            cin >> m >> s;

            if(s == "01")
                b01 = min(b01, m);
            else if(s == "10")
                b10 = min(b10, m);
            else if(s == "11")
                b11 = min(b11, m);
        }

        int ans = min(b11, b10 + b01);
        cout << (ans == 1e18 ? -1 : ans) << '\n';
    }

    return 0;
}