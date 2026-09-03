#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<string> a(n);
        for(auto &row : a) cin >> row;

        int ans = 0;

        for(int i=0; i<n-1; i++)
            if(a[i][m-1] == 'R')
                ans++;

        for(int j=0; j<m-1; j++)
            if(a[n-1][j] == 'D')
                ans++;

        cout << ans << '\n';
    }

    return 0;
}