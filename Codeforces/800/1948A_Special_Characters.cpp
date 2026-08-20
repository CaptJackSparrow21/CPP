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
        if(n % 2)
            cout << "NO\n";
        else {
            cout << "YES\n";
            for(int i=0; i<n; i+=2)
                cout << char('A' + i / 2) << char('A' + i / 2);
            cout << '\n';
        }
    }

    return 0;
}