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
        vector<int> a(n+1), nxt(n+1, -1);

        for(int i=1; i<=n; i++)
            cin >> a[i];

        for(int i=n-1; i>=1; i--) {
            if(a[i] != a[i+1])
                nxt[i] = i+1;
            else    
                nxt[i] = nxt[i+1];
        }

        int q; cin >> q;

        while(q--) {
            int l, r;
            cin >> l >> r;

            if(nxt[l] != -1 && nxt[l] <= r)
                cout << l << " " << nxt[l] << '\n';
            else 
                cout << "-1 -1\n";
        }

        cout << '\n';
    }

    return 0;
}