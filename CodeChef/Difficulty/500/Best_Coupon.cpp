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
        if(0.1 * x > 100)
            cout << 0.1 * x << '\n';
        else 
            cout << "100\n";
    }

    return 0;
}