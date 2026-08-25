#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if((a - c) < (b - d))
            cout << "First\n";
        else if((a - c) > (b - d))
            cout << "Second\n";
        else 
            cout << "Any\n";
    }

    return 0;
}