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
        if(x < 3)
            cout << "LIGHT\n";
        else if(x >= 7)
            cout << "HEAVY\n";
        else 
            cout << "MODERATE\n";
    }

    return 0;
}