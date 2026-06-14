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
        string s;
        cin >> s;

       int k = sqrtl(n);
        if(k * k != n) {
            cout << "No\n";
            continue;
        }

        bool ok = true;
        for(int i=0; i<k; i++) {
            for(int j=0; j<k; j++) {
                int idx = i * k + j;

                if(i == 0 || i == k-1 || j == 0 || j == k-1) {
                    if(s[idx] != '1')
                        ok = false;
                }
                else {
                    if(s[idx] != '0')
                        ok = false;
                }
            }
        }
        cout << (ok ? "Yes\n" : "No\n");
    }

    return 0;
}