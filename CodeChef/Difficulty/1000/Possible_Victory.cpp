#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int r, o, c;
    cin >> r >> o >> c;
    int need = r - c;
    int runs = 6 * 6 * (20 - o);
    cout << (runs > need ? "YES" : "NO");
    

    return 0;
}