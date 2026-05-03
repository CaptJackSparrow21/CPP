#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        if(n == 1) 
            cout << 2 << endl;
        else if(n == 2 || n == 3)
            cout << 1 << endl;
        else 
            cout << (n + 2) / 3 << endl;
    }

    return 0;
}