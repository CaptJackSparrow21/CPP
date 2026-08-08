#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x; cin >> x;
    if(x % 3 == 0 || (x - 1) % 6 == 0)
        cout << "yes";
    else 
        cout << "no";

    return 0;
}