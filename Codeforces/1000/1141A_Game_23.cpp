#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    int ans = -1;

    if(m % n == 0) {
        ans = 0;
        int d = m / n;

        while(d % 2 == 0) {
            d /= 2;
            ans++;
        }

        while(d % 3 == 0) {
            d /= 3;
            ans++;
        }

        if(d != 1)
            ans = -1;
    }

    cout << ans;

    return 0;
}