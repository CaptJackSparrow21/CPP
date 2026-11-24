#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    vector<int> fact;

    int f = 1;
    for(int i=1; i<=14; i++) {
        f *= i;
        if(i >= 3)
            fact.push_back(f);
    }

    while(t--) {
        int n; cin >> n;
        int ans = __builtin_popcountll(n);
        
        for(int mask=0; mask < (1 << 12); mask++) {
            int sum = 0, cnt = 0;

            for(int j=0; j<12; j++) {
                if(mask & (1 << j)) {
                    sum += fact[j];
                    cnt++;
                }
            }

            if(sum <= n) {
                int remaining = n - sum;
                int bits = __builtin_popcountll(remaining);

                ans = min(ans, cnt + bits);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}