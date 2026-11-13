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

        if(n < 7 || n == 9) 
            cout << "NO\n";
        else if(n % 3 != 0) {
            cout << "YES\n";
            cout << 1 << " " << 2 << " " << n - 3 << '\n'; 
        }
        else {
            cout << "YES\n";
            cout << 1 << " " << 4 << " " << n - 5 << '\n';
        }
    }

    return 0;
}