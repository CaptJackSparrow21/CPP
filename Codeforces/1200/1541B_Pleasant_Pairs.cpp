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
        
        vector<int> pos(2 * n + 1, 0);

        for(int i=1; i<=n; i++) {
            int x; cin >> x;
            pos[x] = i;
        }

        int ans = 0;

        for(int x=1; x <= 2*n; x++) {
            if(!pos[x])
                continue;

            for(int y=1; x*y <= 2*n; y++) {
                if(!pos[y])
                    continue;

                if(pos[x] < pos[y] && 
                   pos[x] + pos[y] == x * y)
                    ans++;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}