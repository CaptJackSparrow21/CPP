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
        if(n >= 3)
            cout << "NO\n";
        else if(n == 1)
            cout << "YES\n";
        else 
            cout << ((s[0] != s[1]) ? "YES\n" : "NO\n");
    }

    return 0;
}