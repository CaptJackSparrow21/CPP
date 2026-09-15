#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, n;
    cin >> a >> b >> n;

    int i = 1, ans = 0;
    while(n > 0) {
        if(i % 2) {
            ans = gcd(a, n);
            n -= ans;
            i++;
        }
        else {
            ans = gcd(b, n);
            n -= ans;
            i++;
        }
    }

    cout << ((i % 2) ? "1" : "0");

    return 0;
}