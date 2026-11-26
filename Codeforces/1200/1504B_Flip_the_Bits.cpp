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
        string a, b;
        cin >> a >> b;
        
        vector<bool> good(n);

        int zero = 0, one = 0;

        for(int i=0; i<n; i++) {
            if(a[i] == '0') zero++;
            else one++;

            good[i] = (zero == one);
        }

        int flip = 0;
        bool ok = true;

        for(int i=n-1; i>=0; i--) {
            char curr = a[i];

            if(flip)
                curr = (curr == '0' ? '1' : '0');

            if(curr == b[i])
                continue;

            if(!good[i]) {
                ok = false;
                break;
            }
            flip ^= 1;
        }
        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}