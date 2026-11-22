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

        int p = n;

        for(int i=2; i*i<=n; i++) {
            if(n % i == 0) {
                p = i;
                break;
            }
        }

        int a = n / p;
        int b = n - a;

        cout << a << ' ' << b << '\n';
    }

    return 0;
}