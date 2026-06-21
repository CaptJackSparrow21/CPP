#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    if((n & (n-1)) == 0)
        cout << "YES\n";
    else    
        cout << "NO\n";

    return 0;
}