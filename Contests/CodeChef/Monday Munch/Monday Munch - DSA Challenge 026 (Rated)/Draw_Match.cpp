#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        if(x == 0 && y == 0)    
            cout << "NO\n";
        else if(x == y)
            cout << "YES\n";
        else if(x != y)
            cout << "NO\n";
    }

    return 0;
}