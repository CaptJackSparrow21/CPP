#include<bits/stdc++.h>
using namespace std;
#define int long long

int solve(int x, int y) {
    if(y % x == 0)
        return (y / x) - 1;
    else 
        return y / x;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;

        cout << solve(x, y) << '\n';
    }

    return 0;
}