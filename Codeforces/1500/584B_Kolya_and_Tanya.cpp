#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

int binpow(int a, int b, int p) {
    if(b == 0) return 1;
    if(b % 2)
        return a * binpow(a, b-1, p) % p;
    else {
        int temp = binpow(a, b/2, p) % p;
        return temp * temp % p;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int x = binpow(27, n, mod) % mod;
    int y = binpow(7, n, mod) % mod;

    cout << (x - y + mod) % mod;

    return 0;
}