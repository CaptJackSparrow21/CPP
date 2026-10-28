#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        string s1, s2;
        cin >> s1 >> s2;
        s1 += s2;
        cout << set<char> (s1.begin(), s1.end()). size() - 1 << '\n';
    }

    return 0;
}