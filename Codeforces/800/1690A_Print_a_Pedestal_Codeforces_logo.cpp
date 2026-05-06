#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll x = n / 3;

        if(n % 3 == 0) 
            cout << x << " " << x + 1 << " " << x - 1 << endl;
        else if(n % 3 == 1)
            cout << x << " " << x + 2 << " " << x - 1 << endl;
        else 
            cout << x + 1 << " " << x + 2 << " " << x - 1 << endl;
    }

    return 0;
}