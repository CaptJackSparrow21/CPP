#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, k, x;
        cin >> n >> k >> x;

        int mn = k * (k + 1) / 2;
        int mx = k * (2 * n - k + 1) / 2;

        if(x >= mn && x <= mx)
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}