#include<bits/stdc++.h>
using namespace std;
#define int long long

bool isprime(int n) {
    if(n < 2) return false;
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0) return false;
    for(int i=3; i*i<=n; i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    if(isprime(n))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}