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
        vector<int> w(n), deg(n, 0), extra;

        for(int &i : w) cin >> i;

        for(int i=0; i<n-1; i++) {
            int u, v;
            cin >> u >> v;
            u--, v--;
            deg[u]++;
            deg[v]++;
        }

        int ans = 0;

        for(int i=0; i<n; i++) {
            ans += w[i];

            for(int j=1; j<deg[i]; j++)
                extra.push_back(w[i]);
        }

        sort(extra.rbegin(), extra.rend());

        cout << ans << ' ';

        for(int x : extra) {
            ans += x;
            cout << ans << ' ';
        }
        cout << '\n';
    }

    return 0;
}