#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int a1, a2, a3, b1, b2, b3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

        int mxa1 = max({a1, a2, a3});
        int mna1 = min({a1, a2, a3});
        int mxa2 = a1 + a2 + a3 - mxa1 - mna1;
        int alice = mxa1 + mxa2;

        int mxb1 = max({b1, b2, b3});
        int mnb1 = min({b1, b2, b3});
        int mxb2 = b1 + b2 + b3 - mxb1 - mnb1;
        int bob = mxb1 + mxb2;

        if(alice > bob)
            cout << "Alice\n";
        else if(alice < bob)
            cout << "Bob\n";
        else 
            cout << "Tie\n";
    }

    return 0;
}