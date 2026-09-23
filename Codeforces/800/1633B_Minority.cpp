#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;

        int zero = count(s.begin(), s.end(), '0');
        int one = s.size() - zero;

        cout << min(zero, one) - (zero == one) << '\n';
    }

    return 0;
}