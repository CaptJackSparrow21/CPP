#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;

        int evenA = a / 2;
        int oddA = a - evenA;
        int evenB = b / 2;
        int oddB = b - evenB;

        cout << (evenA * evenB) + (oddA * oddB) << '\n';
    }

    return 0;
}