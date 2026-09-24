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

        string ans = "";
        for(int i=0; i<k; i++)
            ans += "1";
        
        for(int i=0; i<n-k; i++)
            ans += "0";

        cout << ans << '\n';
    }

    return 0;
}