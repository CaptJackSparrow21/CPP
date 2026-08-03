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
        vector<int> a(n+1);
        unordered_map<int, int> mp;
        for(int i=1; i<=n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }

        int mn = LLONG_MAX;
        int ans = -1;

        for(int i=1; i<=n; i++) {
            if(mp[a[i]] == 1 && a[i] < mn) {
                mn = a[i];
                ans = i;
            }
        }

        cout << ans << '\n';
        
    }

    return 0;
}