#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    string s; cin >> s;

    int ans = 0, mx = 0;
    for(int i=0; i<n; i++) {
        if(s[i] == 'R')
            mx++;
        else 
            mx = 0;

        ans = max(ans, mx);
    }

    cout << ans;

    return 0;
}