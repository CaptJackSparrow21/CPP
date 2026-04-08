#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        ll x, y;
        cin >> x >> y;

        ll screens = (y + 1) / 2;
        ll leftover = (screens * 15) - (y * 4);
        x = max(0LL, x - leftover);
        screens += (x + 14) / 15;

        cout << screens << endl;
    }

    return 0;
}