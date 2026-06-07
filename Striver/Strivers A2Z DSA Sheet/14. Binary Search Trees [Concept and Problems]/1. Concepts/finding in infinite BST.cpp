//https://www.hackerearth.com/problem/algorithm/minmax-2-7a1ffa10/

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
        int x = n & (-n);

        cout << n - x + 1 << ' ' << n + x - 1 << '\n';
    }

    return 0;
}