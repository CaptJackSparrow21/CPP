#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9+7;

int der[10000001];
void precompute(int n) {
    der[1] = 0;
    der[2] = 1;
    for(int i=3; i<=n; i++) {
        der[i] = ((i-1) * (der[i-1] + der[i-2])) % mod; 
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    precompute(n);
    cout << der[n] << '\n';


    return 0;
}