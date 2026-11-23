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

        map<int, vector<int>> mp;

        for(int i=0; i<n; i++) {
            int x; cin >> x;
            mp[x % k].push_back(x);
        }

        int ans = 0, odd = 0;
        vector<int> v;

        for(auto &[r, a] : mp) {
            sort(a.begin(), a.end());
            int m = a.size();

            if(m % 2 == 0) {
                for(int i=0; i<m; i+=2)
                    ans += (a[i + 1] - a[i]) / k;
            }
            else {
                odd++;
                v = a;
            }
        }

        if(odd > 1) {
            cout << -1 << '\n';
            continue;
        }

        //for odd size grouping 
        if(odd == 1) {
            int m = v.size();
            vector<int> pref(m + 1, 0), suff(m + 1, 0);

            for(int i=2; i<=m; i+=2)
                pref[i] = pref[i - 2] + (v[i - 1] - v[i - 2]) / k;

            for(int i=m-2; i>=1; i-=2)
                suff[i] = suff[i + 2] + (v[i + 1] - v[i]) / k;

            int mn = LLONG_MAX;

            for(int i=0; i<m; i+=2)
                mn = min(mn, pref[i] + suff[i + 1]);

            ans += mn;
        }
        cout << ans << '\n';
    }

    return 0;
}