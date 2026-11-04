#include<bits/stdc++.h>
using namespace std;
#define int long long

bool prime(int n) {
    if(n <= 1)  return false;
    if(n <= 3) return true;
    if(n % 2 == 0)  return false;
    for(int i=3; i*i<=n; i+=2) {
        if(n % i == 0)
            return false;
    }
    return true;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << (prime(n) ? "yes\n" : "no\n");
    }

    return 0;
}