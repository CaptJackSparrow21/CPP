#include<bits/stdc++.h>
using namespace std;
#define int long long

int fact(int n) {
    if(n <= 1) return 1;
    return n * fact(n - 1);
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << fact(n) << '\n';
    }

    return 0;
}