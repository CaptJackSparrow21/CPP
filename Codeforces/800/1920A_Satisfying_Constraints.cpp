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

        int l = 1, r = 1e9;
        vector<int> remove;

        for(int i=0; i<n; i++) {
            int a, x;
            cin >> a >> x;

            if(a == 1)
                l = max(l, x);
            else if(a == 2)
                r = min(r, x);
            else 
                remove.push_back(x);
        }

        int cnt = 0;
        for(int x : remove)
            if(x >= l & x <= r)
                cnt++;

        cout << max(0LL, r - l + 1 - cnt) << '\n';
    }

    return 0;
}