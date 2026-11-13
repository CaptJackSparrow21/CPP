#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, q;
    cin >> a >> b >> q;

    if(q % 3 == 1)
        cout << a;
    else if(q % 3 == 2)
        cout << b;
    else 
        cout << (a ^ b);

    return 0;
}