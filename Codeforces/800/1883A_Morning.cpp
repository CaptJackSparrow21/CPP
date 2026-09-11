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
        int curr = 1, ans = 0;
        for(char c : s) {
            int x = c - '0';
            if(x == 0)
                x = 10;

            ans += abs(curr - x) + 1;
            curr = x;
        }
        cout << ans << '\n';
    }

    return 0;
}