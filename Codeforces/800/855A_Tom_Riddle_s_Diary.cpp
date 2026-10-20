#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    set<string> seen;
    while(n--) {
        string s; cin >> s;

        if(seen.count(s))
            cout << "YES\n";
        else 
            cout << "NO\n";

        seen.insert(s);
    }

    return 0;
}