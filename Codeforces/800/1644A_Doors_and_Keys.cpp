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
        bool r = false, g = false, b = false;
        bool ok = true;

        for(char c : s) {
            if(c == 'r') r = true;
            else if(c == 'g') g = true;
            else if(c == 'b') b = true;
            else if(c == 'R' && !r) ok = false;
            else if(c == 'G' && !g) ok = false;
            else if(c == 'B' && !b) ok = false;
        }
        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}