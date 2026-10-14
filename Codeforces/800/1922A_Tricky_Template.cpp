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
        string a, b, c;
        cin >> a >> b >> c;

        bool possible = false;

        for(int i=0; i<n; i++) {
            if(a[i] != c[i] && b[i] != c[i]) {
                possible = true;
                break;
            }
        }

        cout << (possible ? "YES\n" : "NO\n");
    }

    return 0;
}