#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string x; cin >> x;
    cout << (x[0] % 2 ? "ODD" : "EVEN");

    return 0;
}