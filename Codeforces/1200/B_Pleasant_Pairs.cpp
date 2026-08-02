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
        
        vector<int> a(n+1);
        vector<int> pos(2 * n + 1, 0);

        for(int i=1; i<=n; i++) {
            cin >> a[i];
            pos[a[i]] = i;
        }

        int ans = 0;

        for(int x=1; x <= 2*n; x++)
    }

    return 0;
}