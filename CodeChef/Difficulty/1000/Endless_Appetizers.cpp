#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int x, y, r;
        cin >> x >> y >> r;


        int sticks = x + (r / 30);
        cout << (sticks + y - 1) / y << '\n';
    }

    return 0;
}