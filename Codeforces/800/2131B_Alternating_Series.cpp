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

        for(int i=1; i<=n; i++) {
            if(i & 1)
                cout << -1 << ' ';
            else if(i == n)
                cout << 2 << ' ';
            else 
                cout << 3 << ' ';
        }
        cout << '\n';
    }

    return 0;
}