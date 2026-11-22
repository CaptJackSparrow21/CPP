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
        int ans = 0;
        for(int i=0; i<s.size()-1; ) {
            if(s[i] == '<' && s[i + 1] == '>') {
                ans++;
                i += 2;
            }
            else 
                i++;
        }
        cout << ans << '\n';
    }

    return 0;
}