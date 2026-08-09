#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<string> bus(n);

    for(auto &s : bus) cin >> s;

    for(auto &s : bus) {
        if(s[0] == 'O' && s[1] == 'O') {
            s[0] = s[1] = '+';
            cout << "YES\n";
            for(auto &x : bus) cout << x << '\n';
            return 0;
        }

        if(s[3] == 'O' && s[4] == 'O') {
            s[3] = s[4] = '+';
            cout << "YES\n";
            for(auto &x : bus) cout << x << '\n';
            return 0;
        }
    }

    cout << "NO\n";

    return 0;
}