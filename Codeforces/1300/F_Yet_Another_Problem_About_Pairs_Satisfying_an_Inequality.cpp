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
        vector<int> valid;
        int ans = 0;

        for(int i=1; i<=n; i++) {
            int x; cin >> x;

            if(x < i) {
                ans += lower_bound(valid.begin(), valid.end(), x)
                        - valid.begin();
                valid.push_back(i);
            }
        }
        cout << ans << '\n';
    }

    return 0;
}