#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        if(n < 4) cout << n << endl;
        else cout << n % 2 << endl;
    }

    // int t; cin >> t;
    // while(t--) {
    //     ll n; cin >> n;
    //     if(n < 4) cout << n << endl;
    //     else {
    //         if(n % 2) cout << 1 << endl;
    //         else cout << 0 << endl;
    //     }

    // }

    return 0;
}