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
        int a = 0, b = 0, c = 0, d = 0;
        int ans = 0;
        for(char ch : s) {
            if(ch == 'A') a++;
            else if(ch == 'B') b++;
            else if(ch == 'C') c++;
            else if(ch == 'D') d++;
            else continue;
        }
        if(a >= n) ans += n;
        else ans += a;

        if(b >= n) ans += n;
        else ans += b;

        if(c >= n) ans += n;
        else ans += c;

        if(d >= n) ans += n;
        else ans += d;

        cout << ans << '\n';

    }

    return 0;
}