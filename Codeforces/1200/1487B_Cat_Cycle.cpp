#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        k--;
        if(n % 2 == 0)
            cout << k % n + 1 << '\n';
        else {
            int mid = n / 2;
            int ans = ((k / mid) + k) % n;
            cout << ans + 1 << '\n';
        }
    }

    return 0;
}