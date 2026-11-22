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

        int cnt = 1, mx = 1;

        for(int i=1; i<n; i++) {
            if(s[i] == s[i - 1])
                cnt++;
            else 
                cnt = 1;

            mx = max(mx, cnt);
        }

        cout << mx + 1 << '\n';
    }

    return 0;
}