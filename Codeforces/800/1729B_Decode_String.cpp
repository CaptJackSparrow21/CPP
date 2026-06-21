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
        
        for(int i=n-1; i>=0;) {
            if(s[i] == '0') {
                int num = 
                    (s[i-2] - '0') * 10 + (s[i-1] - '0');
                ans += char('a' + num - 1);
                i -= 3;
            }
            else {
                int num = s[i] - '0';
                ans += char('a' + num - 1);
                i--;
            }
        }
                
        reverse(ans.begin(), ans.end());
        
        cout << ans << '\n';
    }

    return 0;
}