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
        set<int> seen;
        bool ok = false;

        for(int i=0; i<n; i++) {
            int x; cin >> x;

            if(seen.count(x))
                ok = true;

            seen.insert(x);
        }

        cout << (ok ? "YES\n" : "NO\n");

    }

    return 0;
}