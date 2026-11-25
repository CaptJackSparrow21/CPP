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

        int ans = n + 1;

        for(int c=0; c<26; c++) {
            int l = 0, r = n - 1, cnt = 0;
            while(l <= r) {
                if(s[l] == s[r]){
                    l++;
                    r--;
                }
                else if(s[l] == char('a' + c)) {
                    cnt++;
                    l++;
                }
                else if(s[r] == char('a' + c)) {
                    cnt++;
                    r--;
                }
                else {
                    cnt = n + 1;
                    break;
                }
            }
            ans = min(ans, cnt);
        }
        cout << (ans == n + 1 ? -1 : ans) << '\n';
    }

    return 0;
}