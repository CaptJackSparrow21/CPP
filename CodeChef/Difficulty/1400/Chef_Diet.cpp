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

        int ans = 0, rem = 0;
        bool ok = true;
        int idx = 0;
        for(int i=0; i<n; i++) {
            ans += a[i];
            if(ans < k) {
                ok = false;
                idx = i;
                break;
            }   
            else if(ans >= k) {
                ans = ans - k;
            }
        }

        if(ok)
            cout << "YES\n";
        else 
            cout << "NO " << idx + 1 << '\n'; 
    }

    return 0;
}