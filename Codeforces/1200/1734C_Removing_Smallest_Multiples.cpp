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
        string s; cin >> s;

        vector<bool> vis(n + 1, false);
        int ans = 0;

        for(int i=1; i<=n; i++) {
            for(int j=i; j<=n; j+=i) {
                if(s[j-1] == '1')
                    break;
                
                if(!vis[j]) {
                    ans += i;
                    vis[j] = true;
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}