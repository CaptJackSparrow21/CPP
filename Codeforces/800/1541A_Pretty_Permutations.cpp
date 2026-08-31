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
        if(n % 2) {
            cout << "3 1 2 ";
            for(int i=4; i<=n; i+=2)
                cout << i + 1 << ' ' << i << ' ';
        }
        else {
            for(int i=1; i<=n; i+=2)
                cout << i + 1 << ' ' << i << ' ';
        }
        cout << '\n';
    }

    return 0;
}