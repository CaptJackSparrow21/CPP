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
        vector<int> a(n);
        for(int &i : a) cin >> i;
        int ans = 1;
        int x = 1;
        for(int i=1; i<n; i++) {
            if(a[i] == a[i-1]) {
                x++;
                ans = max(ans, x);
            }
            else 
                x = 1; 
        }
        cout << ans << '\n';
    }

    return 0;
}