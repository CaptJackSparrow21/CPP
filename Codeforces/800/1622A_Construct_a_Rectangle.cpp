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

            if((a == b + c) || (b == a + c) ||
               (c == a + b))
                cout << "YES\n";
            else if(
                (a == b && c % 2 == 0) ||
                (a == c && b % 2 == 0) ||
                (b == c && a % 2 == 0)
            )
                cout << "YES\n";
            else 
                cout << "NO\n";
        }

    return 0;
}