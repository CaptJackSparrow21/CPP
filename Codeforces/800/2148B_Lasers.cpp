#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        int a[n];
        for(int &i : a) cin >> i;
        int b[m];
        for(int &i : b) cin >> i;

        cout << n + m << '\n';
    }

    return 0;
}