#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x; 
    long double y;
    cin >> x >> y;

    if(x + 0.50 > y)
        cout << fixed << setprecision(2) << y;
    else if(x % 5 != 0)
        cout << fixed << setprecision(2) << y;
    else 
        cout << fixed << setprecision(2) << y - x - 0.50;

    return 0;
}