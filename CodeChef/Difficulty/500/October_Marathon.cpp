#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x; cin >> x;
    if(x < 3)
        cout << "GOLD";
    else if(x >= 6)
        cout << "BRONZE";
    else 
        cout << "SILVER";

    return 0;
}