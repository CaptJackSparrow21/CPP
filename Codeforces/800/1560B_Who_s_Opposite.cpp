#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        ll d = abs(a - b);
        ll n = 2 * d;

        if(a > n || b > n || c > n)
            cout << -1 << endl;
        else {
            ll ans = (c + d) % n;
            if(ans == 0) 
                cout << n << endl;
            else 
                cout << ans << endl;
        }
    }

    return 0;
}