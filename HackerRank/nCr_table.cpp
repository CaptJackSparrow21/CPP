#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        for(int i=0; i<=n; i++) {
            cout << ncr[n][i];
            if(i != n)
                cout << " ";
        }
        cout << '\n';
    }

    return 0;
}