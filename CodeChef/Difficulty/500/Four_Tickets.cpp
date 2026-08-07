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
        if(4 * x <= 1000)
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}