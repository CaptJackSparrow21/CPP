#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        string s1, s2;
        
        cin >> s1 >> s2;
        int n = s1.size();

        int mx = 0, mn = 0;

        for(int i=0; i<s1.size(); i++) {
            if(s1[i] == s2[i]) {
                if(s1[i] == '?')
                    mx++;
            }
            else if(s1[i] != s2[i]) {
                if(s1[i] != '?' && s2[i] != '?')
                    mn++;
            }
            else {
                mx++;
                mn++;
            }
        }
        cout << mn << ' ' << mx << '\n';
    }

    return 0;
}