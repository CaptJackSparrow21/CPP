#include<bits/stdc++.h>
using namespace std;
#define ll long long

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    string s; cin >> s;

    ll ans = 0;

    for(char c : s)
        ans += c - '0';

    cout << ans;

    return 0;
}