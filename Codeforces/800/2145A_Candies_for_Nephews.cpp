#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int x = n % 3;
        if(x == 0)
            cout << 0 << '\n';
        else 
            cout << 3 - x << '\n';
    }

    return 0;
}