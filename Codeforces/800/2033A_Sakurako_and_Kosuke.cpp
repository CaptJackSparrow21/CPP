#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        if(n & 1) cout << "Kosuke\n";
        else cout << "Sakurako\n";
    }

    return 0;
}