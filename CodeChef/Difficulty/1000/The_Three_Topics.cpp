#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a == d || b == d || c == d)
        cout << "Yes\n";
    else 
        cout << "No\n";

    return 0;
}