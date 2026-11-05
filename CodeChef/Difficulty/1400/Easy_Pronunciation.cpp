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

        int cnt = 0;
        bool ok = false;

        for(int i=0; i<n; i++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' 
                || s[i] == 'o' || s[i] == 'u')
                    cnt = 0;
            else 
                cnt++;

            if(cnt > 3) {
                ok = true;
                break;
            }
        }

        cout << (ok ? "NO\n" : "YES\n");
    }

    return 0;
}