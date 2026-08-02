#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int ans = 0;
    for(int x=0; x*a <= n; x++) {
        for(int y=0; x*a + y*b <= n; y++) {
            int rem = n - x * a - y * b;
            if(rem % c == 0) {
                int z = rem / c;
                ans = max(ans, x + y + z);
            }
        }
    }

    cout << ans;

    return 0;
}