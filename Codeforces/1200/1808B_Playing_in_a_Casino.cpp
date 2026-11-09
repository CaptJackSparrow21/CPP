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

        vector<vector<int>> a(n, vector<int> (m));

        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++)
                cin >> a[i][j];

        int ans = 0;

        for(int j=0; j<m; j++) {
            vector<int> v;

            for(int i=0; i<n; i++)
                v.push_back(a[i][j]);

            sort(v.begin(), v.end());
            int prefix = 0;

            for(int i=0; i<n; i++) {
                ans += i * v[i] - prefix;
                prefix += v[i];
            }
        }
        cout << ans << '\n';
    }

    return 0;
}