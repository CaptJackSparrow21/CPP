#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;

        if((n % 2 == b % 2) && (a <= b || (n % 2 == a % 2)))
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}