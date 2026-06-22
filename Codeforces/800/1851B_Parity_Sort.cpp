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
        vector<int> a(n), b;
        for(int &i : a) cin >> i;
        b = a;

        sort(b.begin(), b.end());
        bool ok = true;

        for(int i=0; i<n; i++) {
            if((a[i] & 1) != (b[i] & 1)) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}