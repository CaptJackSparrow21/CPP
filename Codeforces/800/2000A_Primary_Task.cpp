#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int a; cin >> a;
        if(a >= 102 && a <= 109) cout << "YES\n";
        else if(a >= 1010 && a <= 1099) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}