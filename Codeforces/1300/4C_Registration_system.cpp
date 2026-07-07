#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    unordered_map<string, int> mp;
    while(n--) {
        string s; cin >> s;

        if(!mp.count(s)) {
            cout << "OK\n";
            mp[s] = 1;
        }
        else {
            cout << s << mp[s] << '\n';
            mp[s]++;
        }
    }

    return 0;
}