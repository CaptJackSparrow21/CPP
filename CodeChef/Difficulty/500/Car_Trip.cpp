#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int x; cin >> x;
        if(x <= 300)
            cout << 3000 << '\n';
        else 
            cout << x * 10 << '\n';
    }

    return 0;
}