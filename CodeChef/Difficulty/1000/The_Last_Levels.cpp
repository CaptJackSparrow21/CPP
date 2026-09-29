#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int x, y, z;
        cin >> x >> y >> z;
        int rest = 0;
        if(x % 3 == 0)
            rest = ((x / 3) - 1) * z;
        else 
            rest = (x / 3) * z;

        cout << (x * y) + rest << '\n';

    }

    return 0;
}