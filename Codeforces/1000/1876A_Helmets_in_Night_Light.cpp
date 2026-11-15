#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, p;
        cin >> n >> p;
        vector<int> a(n), b(n);
        for(int &i : a) cin >> i;
        for(int &i : b) cin >> i;

        vector<pair<int, int>> v;

        for(int i=0; i<n; i++)
            v.push_back({b[i], a[i]});

        sort(v.begin(), v.end());

        int ans = p, cnt = 1;

        for(auto [cost, capacity] : v) {
            if(cost >= p || cnt == n)
                break;

            int take = min(capacity, n - cnt);

            ans += take * cost;
            cnt += take;
        }

        ans += (n - cnt) * p;
        cout << ans << '\n';
        
    }

    return 0;
}