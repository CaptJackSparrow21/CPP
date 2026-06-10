#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        string n; cin >> n;

        if((n.back() - '0') % 2 == 0) {
            cout << "0\n";
            continue;
        }

        if((n[0] - '0') % 2 == 0) {
            cout << "1\n";
            continue;
        }

        int cnt2 = count(n.begin(), n.end(), '2');
        int cnt4 = count(n.begin(), n.end(), '4');
        int cnt6 = count(n.begin(), n.end(), '6');
        int cnt8 = count(n.begin(), n.end(), '8');

        if(cnt2 > 0 || cnt4 > 0 || cnt6 > 0 || cnt8 > 0) {
            cout << "2\n";
            continue;
        }

        cout << "-1\n";
    }

    return 0;
}