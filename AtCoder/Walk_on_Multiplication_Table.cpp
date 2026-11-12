#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int ans = n - 1;

    for(int i=1; i*i <= n; i++) {
        if(n % i == 0) {
            int j = n / i;
            ans = min(ans, i + j - 2);
        }
    }

    cout << ans << '\n';

    return 0;
}