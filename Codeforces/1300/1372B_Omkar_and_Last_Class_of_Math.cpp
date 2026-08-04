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
        int d = -1;
        for(int i=2; i*i<=n; i++) {
            if(n % i == 0) {
                d = i;
                break;
            }
        }

        if(d == -1)
            cout << 1 << ' ' << n - 1 << '\n';
        else {
            int a = n / d;
            cout << a << ' ' << n - a << '\n';
        }
    }

    return 0;
}