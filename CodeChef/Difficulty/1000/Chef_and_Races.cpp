#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int x, y, a, b;
        cin >> x >> y >> a >> b;

        if((x != a && y != b) && (x != b && y != a))    
            cout << "2\n";
        else if(((x == a) || (x == b)) && ((y == a) || (y == b)))
            cout << "0\n";
        else 
            cout << "1\n";
    }

    return 0;
}