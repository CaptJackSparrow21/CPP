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

        if(n % 4 != 0) {
            cout << -1 << '\n';
            continue;
        }

        if(n % 12 == 0) 
            cout << n / 6 << ' ' << n / 4 << '\n';
        else 
            cout << n / 4 << ' ' << n / 4 << '\n';
    }

    return 0;
}