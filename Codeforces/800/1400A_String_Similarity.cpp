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

        string ans;
        for(int i=0; i<(2*n) - 1; i++) {
            if(i % 2 == 0)
                ans += s[i];
        }

        cout << ans << '\n';
    }

    return 0;
}