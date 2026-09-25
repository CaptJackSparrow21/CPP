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
        for(char c : s) {
            if(c == 'A') ans += 'T';
            else if(c == 'T') ans += 'A';
            else if(c == 'C') ans += 'G';
            else ans += 'C';
        }
        cout << ans << '\n';
    }

    return 0;
}