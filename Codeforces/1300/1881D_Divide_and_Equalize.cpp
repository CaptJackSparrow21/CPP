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
        map<int, int> cnt;

        for(int i=0; i<n; i++) {
            int x; cin >> x;

            for(int p=2; p*p<=x; p++) {
                while(x % p == 0) {
                    cnt[p]++;
                    x /= p;
                }
            }

            if(x > 1)
                cnt[x]++;
        }

        bool ok = true;

        for(auto [p, c] : cnt) {
            if(c % n != 0) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}