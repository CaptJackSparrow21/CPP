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
        int zero = 0, one = 0;

        for(char c : s) {
            if(c == '0') zero++;
            else one++;
        }

        int ans = 0;

        for(int i=0; i<s.size(); i++) {
            if(s[i] == '0') {
                if(one == 0) {
                    ans = s.size() - i;
                    break;
                }
                one--;
            }
            else {
                if(zero == 0) {
                    ans = s.size() - i;
                    break;
                }
                zero--;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}