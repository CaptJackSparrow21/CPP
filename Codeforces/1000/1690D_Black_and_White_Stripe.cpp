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
        string s; cin >> s;

        int cnt = 0;

        for(int i=0; i<k; i++)
            cnt += (s[i] == 'W');

        int ans = cnt;

        for(int i=k; i<n; i++) {
            cnt -= (s[i - k] == 'W');
            cnt += (s[i] == 'W');

            ans = min(ans, cnt);
        }
        
        cout << ans << '\n';
    }

    return 0;
}