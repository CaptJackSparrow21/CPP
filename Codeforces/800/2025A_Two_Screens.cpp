#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int q; cin >> q;
    while(q--) {
        string s, t;
        cin >> s >> t;

        int k = 0;
        while(k < s.size() && k < t.size() && s[k] == t[k])
            k++;

        cout << s.size() + t.size() - k + (k > 0) << '\n';
    }

    return 0;
}