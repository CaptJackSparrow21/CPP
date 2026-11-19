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
        vector<int> a(n);
        for(int &i : a) cin >> i;
        sort(a.begin(), a.end());
        int cnt = 1, mx = 1;
        for(int i=1; i<n; i++) {
            if(a[i] - a[i - 1] <= k) {
                cnt++;
                mx = max(mx, cnt);
            }
            else 
                cnt = 1;
        }

        cout << n - mx << '\n';
    }

    return 0;
}