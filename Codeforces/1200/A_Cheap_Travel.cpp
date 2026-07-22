#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int 1by1 = n * a;
    int mplusrem = b + (n - m) * a;

    cout << min(1by1, mplusrem);

    return 0;
}