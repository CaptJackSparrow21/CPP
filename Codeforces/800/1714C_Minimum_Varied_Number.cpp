#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int s; cin >> s;
        
        string ans;

        for(int d=9; d>=1; d--) {
            if(s >= d) {
                ans = char('0' + d) + ans;
                s -= d;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}