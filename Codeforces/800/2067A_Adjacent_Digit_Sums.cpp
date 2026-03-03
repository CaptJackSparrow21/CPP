#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t; cin >> t;
    while(t--) {
        ll x, y;
        cin >> x >> y;

        ll diff = x + 1 - y;
        if(diff >= 0 && diff % 9 == 0) 
            cout << "Yes\n";
        else 
            cout << "No\n";
    }

    return 0;
}