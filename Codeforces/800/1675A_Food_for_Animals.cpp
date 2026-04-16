#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        ll a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        ll d_need = max(0ll, x - a);
        ll c_need = max(0ll, y - b);

        if(c_need + d_need <= c)
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}