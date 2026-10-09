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
        int cnt = 0;
        for(int i=1; i<=n; i++) {
            int x; cin >> x;

            cnt += (i % 2 != x % 2);
        }

        cout << (cnt == 0 || cnt == n ? "YES\n" : "NO\n");
    }

    // int t; cin >> t;
    // while(t--) {
    //     int n; cin >> n;
    //     vector<int> a(n);
    //     for(int &i : a) cin >> i;
    //     unordered_map<int, char> mp;
    //     for(int i=0; i<n; i++) {
    //         if(i % 2 == 0) {
    //             mp[a[i]] = 'R';
    //         }
    //         else 
    //             mp[a[i]] = 'B';
    // }

    //     sort(a.begin(), a.end());
    //     bool ok = true;
    //     for(int i=0; i<n-1; i++) {
    //         if(mp[a[i]] == mp[a[i+1]]) {
    //             ok = false;
    //             break;
    //         }
    //     }

    //     cout << (ok ? "YES\n" : "NO\n");
    // }

    return 0;
}