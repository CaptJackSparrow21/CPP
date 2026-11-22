#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if(l2 >= l1) {
        if(l2 <= r1) {
            if(r2 < r1)
                cout << l2 << ' ' << r2 << '\n';
            else 
                cout << l2 << ' ' << r1 << '\n';
        }
        else 
            cout << -1 << '\n';
    }
    else {
        if(r2 >= r1)
            cout << l1 << ' ' << r1 << '\n';
        else if(r2 < l1)
            cout << -1 << '\n';
        else
            cout << l1 << ' ' << r2 << '\n';
    }

    return 0;
}