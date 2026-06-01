#include<bits/stdc++.h>
using namespace std;
#define ll long long

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    for(int i=1; i<=n; i++) {
        if(n % i == 0) {
            cout << i << '\n';
        }
    }

    return 0;
}