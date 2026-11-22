#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; char c;
        cin >> n >> c;
        string s; cin >> s;
        s += s;

        int nextGreen = -1, ans = 0;

        for(int i=2*n-1; i>=0; i--) {
            if(s[i] == 'g')
                nextGreen = i;
            
            if(i < n && s[i] == c)
                ans = max(ans, nextGreen - i);
        }

        cout << ans << '\n';
    }

    return 0;
}