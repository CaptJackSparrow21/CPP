#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    int x = d1 + d2 + d3;
    int y = d1 + d1 + d2 + d2;
    int z = d1 + d3 + d3 + d1;
    int a = d2 + d3 + d3 + d2;

    cout << min({a, x, y, z});

    return 0;
}