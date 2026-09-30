#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        int c = 21 - a - b;
        if(c >= 1 && c <= 10)
            cout << c << '\n';
        else 
            cout << -1 << '\n';
    }
    return 0;
}