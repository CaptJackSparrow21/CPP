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
        vector<int> a(n);
        for(int &i : a) cin >> i;
        string s; cin >> s;
        unordered_map<int, char> mp;
        bool ok = true;

        for(int i=0; i<n; i++) {
            if(mp.find(a[i]) == mp.end())
                mp[a[i]] = s[i];
            else if(mp[a[i]] != s[i])
                ok = false;
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}