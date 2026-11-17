#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        int total = 0;
        for(int &x : a) {
            cin >> x;
            total += x;
        }

        if(total < s) {
            cout << -1 << '\n';
            continue;
        }

        int l = 0, sum = 0, mx = 0;

        for(int r=0; r<n; r++) {
            sum += a[r];

            while(sum > s) {
                sum -= a[l];
                l++;
            }

            if(sum == s)
                mx = max(mx, r - l + 1);
        }

        cout << n - mx << '\n';
    }

    return 0;
}