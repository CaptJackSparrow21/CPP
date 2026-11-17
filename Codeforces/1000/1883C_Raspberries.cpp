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
        int ans = k, even = 0;
        for(int &i : a) {
            cin >> i;
            if(i % 2 == 0)
                even++;

            ans = min(ans, (k - i % k) % k);
        }

        if(k == 4)
            ans = min(ans, max(0LL, 2 - even));
            
        cout << ans << '\n';
    }

    return 0;
}