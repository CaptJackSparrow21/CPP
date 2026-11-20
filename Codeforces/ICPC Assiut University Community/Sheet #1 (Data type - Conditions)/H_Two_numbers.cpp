#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;

    cout << "floor " << a << " / " << b << " = " << a / b << '\n';
    cout << "ceil " << a << " / " << b << " = " << (a + b - 1) / b << '\n';
    cout << "round " << a << " / " << b << " = " << round((double)a / b) << '\n';

    return 0;
}