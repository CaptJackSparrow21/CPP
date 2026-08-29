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
        vector<int> a(n);
        for(int &i : a) cin >> i;

        for(int m=2; ; m*=2) {
            bool ok = false;

            for(int i=1; i<n; i++) {
                if((a[i] - a[0]) % m != 0) {
                    ok = true;
                    break;
                }
            }

            if(ok) {
                cout << m << '\n';
                break;
            }
        }
    }

    return 0;
}