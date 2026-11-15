#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int mx = max({a, b, c});

        if(a > 50 && mx == a)
            cout << "A\n";
        else if(b > 50 && mx == b)
            cout << "B\n";
        else if(c > 50 && mx == c)
            cout << "C\n";
        else 
            cout << "NOTA\n";
    }

    return 0;
}