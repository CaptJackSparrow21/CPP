#include<bits/stdc++.h>
using namespace std;
#define ll long long

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int k, s;
    cin >> k >> s;

    ll ans = 0;

    for(int x=0; x<=k; x++) {
        for(int y=0; y<=k; y++) {
            int z = s - x - y;

            if(0 <= z && z <= k)
                ans++;
        }
    }
    cout << ans;

    return 0;
}