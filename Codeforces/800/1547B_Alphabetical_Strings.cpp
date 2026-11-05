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
        int n = s.size();
        int pos = s.find('a');

        int l = pos, r = pos;
        bool ok = (pos != -1);

        for(char ch = 'b'; ch < 'a' + n && ok; ch++) {
            if(l > 0 && s[l - 1] == ch)
                l--;
            else if(r < n - 1 && s[r + 1] == ch)
                r++;
            else 
                ok = false;
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}