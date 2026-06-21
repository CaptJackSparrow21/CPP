#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, m, x;
        cin >> n >> m >> x;
        x--;
        int row = x % n;
        int col = x / n;

        cout << (row * m) + col + 1 << '\n';
    }

    return 0;
}