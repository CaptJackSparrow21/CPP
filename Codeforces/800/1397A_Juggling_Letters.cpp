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
        unordered_map<int, int> mp;
        bool ok = true;
        int temp = n;
        while(temp--) {
            string s; cin >> s;
            for(int i=0; i<s.size(); i++) {
                int x = s[i] - '0';
                mp[x]++;
            }
        }

        for(auto [c, v] : mp) {
            if(v % n != 0) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}