#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int i = 1;
        while(n % i == 0)
            i++;

        cout << i - 1 << '\n';
    }

    return 0;
}