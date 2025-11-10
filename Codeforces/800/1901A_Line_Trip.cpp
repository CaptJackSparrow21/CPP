#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }

        int maxDist = a[0];
        for(int i=1; i<n; i++) {
            maxDist = max(maxDist, a[i] - a[i-1]);
        }

        maxDist = max(maxDist, 2 * (x - a[n-1]));
        cout << maxDist << endl;
    }

    // int t; cin >> t;
    // while(t--) {
    //     int n, x;
    //     cin >> n >> x;

    //     int prev = 0, ans = 0;
    //     for(int i=0; i<n; i++) {
    //         int a; cin >> a;
    //         ans  = max(ans, a - prev);
    //         prev = a;
    //     }

    //     ans = max(ans, 2 * (x - prev));
    //     cout << ans << endl;
    // }
    return 0;
}