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

        string t = s;
        sort(t.begin(), t.end());
        
        cout << (t == s ? "YES\n" : "NO\n");
    }

    return 0;
}