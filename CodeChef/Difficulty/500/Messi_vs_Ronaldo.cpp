#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int m = 2 * a + b;
    int r = 2 * x + y;

    if(m > r)
        cout << "Messi";
    else if(m < r)
        cout << "Ronaldo";
    else 
        cout << "Equal";

    return 0;
}