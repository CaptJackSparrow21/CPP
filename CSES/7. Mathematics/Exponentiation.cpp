#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

int binpow(int a, int b, int mod) {
    if(b == 0) return 1;
    if(b % 2 == 1) {
        return a * binpow(a, b-1, mod) % mod;
    }
    else {
        int temp = binpow(a, b/2, mod) % mod;
        return temp * temp % mod;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;

        cout << binpow(a, b, mod) % mod << '\n';

    }

    return 0;
}