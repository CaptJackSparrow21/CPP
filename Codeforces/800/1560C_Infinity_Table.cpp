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
        int k = 1;

        while(k * k < n)
            k++;

        int offset = n - (k - 1) * (k - 1);
        int row, col;

        if(offset <= k) {
            row = offset;
            col = k;
        }
        else {
            row = k;
            col = 2 * k - offset;
        }

        cout << row << ' ' << col << '\n';
    }

    return 0;
}