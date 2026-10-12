#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for(int &i : a) cin >> i;
        int cost = 0, ans = 0, mx = 0;

        int j = 1;
        for(int i=0; i<n; i++) {
            if(cost + a[i] <= m) {
                
            }

        }

        cout << ans << '\n';
    }

    return 0;
}