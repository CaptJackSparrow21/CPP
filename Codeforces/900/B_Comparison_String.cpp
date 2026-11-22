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
        int l = 0, g = 0;
        int mx = 0;
        if(s[0] == '<') l++;
        else if(s[0] == '>') g++;
        mx = max({mx, l, g});

        for(int i=1; i<n; i++) {
            if(s[i] == '<' && s[i] == s[i-1]) {
                l++;
                mx = max(mx, l);
                g = 1;
            }
            else if(s[i] == '>' && s[i] == s[i-1]) {
                g++;
                mx = max(mx, l);
                l = 1;
            }
        }

        cout << mx + 1 << '\n';
    }

    return 0;
}