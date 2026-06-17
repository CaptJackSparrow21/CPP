#include<bits/stdc++.h>
using namespace std;
#define int long long

int binpow(int a, int b) {
    if(b == 0) return 1;
    if(b % 2)
        return a * binpow(a, b-1);
    else {
        int temp = binpow(a, b/2);
        return temp * temp;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int ans = 0;
    for(int i=1; i<=n; i++) {
        ans += binpow(2, i);
    }
    cout << ans << '\n';

    return 0;
}