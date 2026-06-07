#include<bits/stdc++.h>
using namespace std;
#define ll long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        bool ok = false;

        for(int i=0; i+1<s.size(); i++) {
            if(s[i] == s[i+1]) {
                char c = (s[i] == 'a' ? 'b' : 'a');
                s.insert(s.begin() + i + 1, c);
                ok = true;
                break;
            }
        }

        if(!ok) {
            char c = (s[0] == 'a' ? 'b' : 'a');
            s = c + s;
        }

        cout << s << '\n';
    }

    return 0;
}