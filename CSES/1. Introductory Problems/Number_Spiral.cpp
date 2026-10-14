#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int y, x;
        cin >> y >> x;
        int r = y, c = x;

        if(c >= r) {
            if(c % 2)
                cout << (c * c) - (r - 1) << '\n';
            else 
                cout << (c - 1) * (c - 1) + r << '\n';
        }
        else {
            if(r % 2 == 0)
                cout << (r * r) - (c - 1) << '\n';
            else 
                cout << (r - 1) * (r - 1) + c << '\n';
        }
    }

    return 0;
}