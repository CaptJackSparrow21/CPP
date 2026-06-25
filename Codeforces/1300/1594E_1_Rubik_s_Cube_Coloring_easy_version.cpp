#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9+7;

int binpow(int a, int b, int m) {
    if(b == 0) return 1;
    if(b % 2)
        return a * binpow(a, b-1, m) % m;
    else {
        int temp = binpow(a, b/2, m) % m;
        return temp * temp % m;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int k ; cin >> k;
    int exp = (binpow(2, k, mod - 1) - 2 + (mod - 1)) % (mod - 1);
    cout << 6 * binpow(4, exp, mod) % mod;

    return 0;
}