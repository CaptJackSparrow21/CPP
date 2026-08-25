#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        if(n % 2 == 0)
            cout << ((x >= (n / 2)) ? "YES\n" : "NO\n");
        else    
            cout << ((x > (n / 2)) ? "YES\n" : "NO\n");
    }

    return 0;
}