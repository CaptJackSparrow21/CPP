#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    unordered_map<string, int> mp;
    string s, ans;
    int mx = 0;

    while(n--) {
        cin >> s;
        mp[s]++;

        if(mp[s] > mx) {
            mx = mp[s];
            ans = s;
        }
    }

    cout << ans;

    return 0;
}