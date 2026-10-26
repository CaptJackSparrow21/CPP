#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, k; 
        cin >> n >> k;
        string s; cin >> s;
        int ans = 0;
        for(int i=0; i<n; i+=k) {
            string farm = s.substr(i, k);
            int ch = 0;
            for(auto c : farm) {
                if(c == '1')
                    ch++;
            }
            if(ch == k)
                ans++;
        }
        cout << ans << '\n';
    }


    return 0;
}