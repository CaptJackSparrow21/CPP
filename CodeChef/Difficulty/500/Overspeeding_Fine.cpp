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
        if(x <= 70)
            cout << "0\n";
        else if(x > 100)
            cout << "2000\n";
        else    
            cout << "500\n";
    }

    return 0;
}