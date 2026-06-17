#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;

        int ans = (s[0] - 'a') * 25 
                + (s[1] - 'a')
                + (s[0] > s[1]);

        cout << ans << '\n';
    }

    return 0;
}