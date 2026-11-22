#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    double n; cin >> n;

    int a = n;
    double b = n - a;

    if(b == 0)
        cout << "int " << a;
    else 
        cout << "float " << a << ' ' << b;

    return 0;
}