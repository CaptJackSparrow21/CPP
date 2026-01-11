#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t; cin >> t;
    while(t--) {
        ll n, k; 
        cin >> n >> k;
        if(n % 2 == 0) cout << "YES\n";
        else if(n >= k && (n - k) % 2 == 0) cout << "YES\n";
        else cout << "NO\n"; 
    }

    return 0;
}