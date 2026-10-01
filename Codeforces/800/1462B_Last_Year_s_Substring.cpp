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
        string s; cin >> s;
        bool ok = false;
        for(int i=0; i<5; i++) {
            string x = s.substr(0, i) + s.substr(n - (4 - i));

            if(x == "2020") {
                ok = true;
                break;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}