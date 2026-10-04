#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        int hot = 0, cold = 0;
        if((a - b < 0) && abs(a - b) < x)
            cout << "YES\n"; 
        else if((a - b > 0))
            int cold = abs(a - b);
    }

    return 0;
}