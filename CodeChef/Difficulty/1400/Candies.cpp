#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    unordered_map<int, int> mp;
    for(int i=0; i < 2 * n; i++) {
        int x; cin >> x;
        mp[x]++;
    }

    for(auto [val, freq] : mp)
        if(freq > 2) {
            cout << "NO\n";
            return;
        }

    cout << "YES\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) 
        solve();

    return 0;
}