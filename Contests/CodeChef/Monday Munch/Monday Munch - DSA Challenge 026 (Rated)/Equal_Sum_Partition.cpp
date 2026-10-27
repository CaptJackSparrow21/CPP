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
        int ans = accumulate(a.begin(), a.end(), 0);
        if(ans % 2)
            cout << "NO\n";
        else {
            int target = ans / 2;
            vector<bool> dp(target + 1, false);
            dp[0] = true;
            
            for(int x : a) {
                for(int s = target; s >= x; s--)
                    dp[s] = dp[s] ||dp[s - x];
            }

            cout << (dp[target] ? "YES\n" : "NO\n");
        }
    }

    return 0;
}