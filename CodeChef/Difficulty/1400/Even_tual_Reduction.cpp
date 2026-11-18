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
        string s; cin >> s;

        unordered_map<char, int> mp;

        for(char c : s) {
            mp[c - 'a']++;
        }

        bool ok = true;
        for(auto [c, val] : mp) {
            if(val % 2 == 1) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}