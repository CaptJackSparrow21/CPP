#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        double a, x, b, y;
        cin >> a >> x >> b >> y;
        if((a / x) > (b / y))
            cout << "Alice\n";
        else if((a / x) < (b / y))
            cout << "Bob\n";
        else 
            cout << "Equal\n";
    }

    return 0;
}