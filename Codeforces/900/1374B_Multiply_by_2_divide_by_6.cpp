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
        int c2 = 0, c3 = 0;
        while(n % 2 == 0) {
            n /= 2;
            c2++;
        }

        while(n % 3 == 0) {
            n /= 3;
            c3++;
        }

        if(n != 1 || c2 > c3)
            cout << -1 << '\n';
        else    
            cout << 2 * c3 - c2 << '\n';
    }

    return 0;
}