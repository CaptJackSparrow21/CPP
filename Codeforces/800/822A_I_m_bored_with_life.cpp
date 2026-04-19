#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a ,b;
    cin >> a >> b;

    ll m = min(a, b);
    ll ans = 1;
    for(ll i=2; i<=m; i++)
    ans *= i;

    cout << ans;

    return 0;
}