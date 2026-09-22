#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        bool ok = true;

        for(int i=1; i<s.size()/2; i++) {
            if(s[i] != s[0]) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "NO\n" : "YES\n");
    }

    return 0;
}