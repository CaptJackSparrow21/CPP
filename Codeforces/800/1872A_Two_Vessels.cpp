#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        ll a, b, c;
        cin >> a >> b >> c;
        ll d = abs(a - b);
        ll step = 2 * c;
        ld x = (ld)d / (ld)step;
        ll ans = ceil(x);
        cout << ans << endl;
    }

    return 0;
}