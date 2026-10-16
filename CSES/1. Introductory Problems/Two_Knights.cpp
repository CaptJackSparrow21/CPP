#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;

    for(int i=1; i<=n; i++) {
        int total = i * i * (i * i - 1) / 2;
        int attacking = 4 * (i - 1) * (i - 2);
        cout << total - attacking << '\n';
    }

    return 0;
}