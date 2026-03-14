#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int k; cin >> k;
        if(k == 1) cout << "YES\n";
        else if(k & 1) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}