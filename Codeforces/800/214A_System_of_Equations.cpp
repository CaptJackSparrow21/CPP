#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;

    ll cnt = 0;

    for(ll a=0; a*a<=n; a++) {
        ll b = n - (a * a);

        if(a + (b * b) == m) cnt++;
    }

    cout << cnt << endl;

    return 0;
}