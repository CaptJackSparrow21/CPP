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
        vector<pair<int, int>> v(n);
        for(int i=0; i<n; i++) cin >> v[i].first;
        for(int i=0; i<n; i++) cin >> v[i].second;

        sort(v.begin(), v.end());

        for(auto [need, gain] : v) {
            if(need > k)
                break;
            k += gain;
        }
        cout << k << '\n';
    }

    return 0;
}