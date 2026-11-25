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
        string a, b;
        cin >> a >> b;

        int ans = 0;

        for(int i=0; i<n; i++) {
            if(b[i] == '1') {
                if(i > 0 && a[i-1] == '1') {
                    a[i-1] = '0';
                    ans++;
                }
                else if(a[i] == '0') 
                    ans++;
                else if(i+1 < n && a[i+1] == '1') {
                    a[i+1] = '0';
                    ans++;
                }
            }
        }
        cout << ans << '\n';
    }

    return 0;
}