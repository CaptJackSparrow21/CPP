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
        if(x < 4)
            cout << "MILD\n";
        else if(x >= 7)
            cout << "HOT\n";
        else    
            cout << "MEDIUM\n";
    }

    return 0;
}