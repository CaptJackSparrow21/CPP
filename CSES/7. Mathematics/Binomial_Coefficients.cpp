#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

int binpow(int a, int b) {
    if(b == 0) return 1;
    if(b % 2)
        return (a * binpow(a, b-1)) % mod;
    else {
        int temp = binpow(a, b/2) % mod;
        return temp * temp % mod;
    }
}

int inverse(int x) {
    return binpow(x, mod-2);
}

int fact[1000100];
void precompute() {
    fact[0] = 1;
    for(int i=1; i<=1000000; i++)
        fact[i] = (fact[i-1] * i) % mod;
}

int ncr_fact(int n, int r) {
    int num = fact[n];
    int den = (fact[n-r] * fact[r]) % mod;
    return (num * inverse(den)) % mod;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    precompute();
    while(t--) {
        int a, b;
        cin >> a >> b;

        cout << ncr_fact(a, b) << '\n';
    }

    return 0;
}