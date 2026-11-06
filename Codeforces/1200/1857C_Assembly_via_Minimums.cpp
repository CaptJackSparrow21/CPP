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
        int m = n * (n - 1) / 2;
        vector<int> b(m);
        for(int &i : b) cin >> i;

        sort(b.begin(), b.end());
        int idx = 0, step = n - 1;

        for(int i=0; i<n-1; i++) {
            cout << b[idx] << ' ';
            idx += step;
            step--;
        }

        cout << 1000000000 << '\n';

    }

    return 0;
}