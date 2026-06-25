#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9+7;

int binpow(int a, int b) {
    if(b == 0) return 1;
    if(b % 2)
        return a * binpow(a, b-1) % mod;
    else {
        int temp = binpow(a, b/2) % mod;
        return temp * temp % mod;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int k ; cin >> k;
    int ans = binpow(2, k);
    ans = (ans - 2) % mod;
    ans = binpow(4, ans) % mod;
    cout << (6 * ans) % mod;



    return 0;
}