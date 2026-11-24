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
        bool found = false;

        for(int i=1; i<s.size(); i++) {
            string a = s.substr(0, i);
            string b = s.substr(i);

            if(b[0] != '0' && stoll(a) < stoll(b)) {
                cout << a << ' ' << b << '\n';
                found = true;
                break;
            }
        }

        if(!found)
            cout << -1 << '\n';
    }

    return 0;
}