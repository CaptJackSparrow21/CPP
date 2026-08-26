#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        int ans = 0;
        ans = w + (y * z);
        if(ans < x)
            cout << "unfilled\n";
        else if(ans > x)
            cout << "overflow\n";
        else 
            cout << "filled\n";
    }

    return 0;
}