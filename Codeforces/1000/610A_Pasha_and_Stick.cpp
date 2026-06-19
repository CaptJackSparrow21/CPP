#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    if(n % 2)
        cout << 0;
    else if(n % 4 == 0)
        cout << (n / 4) - 1;
    else 
        cout << n / 4;

    return 0;
}