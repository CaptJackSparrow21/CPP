#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b, c;
    cin >> a >> b >> c;

    cout << min({a, b, c}) << " " << max({a, b, c}) << endl;

    return 0;
}