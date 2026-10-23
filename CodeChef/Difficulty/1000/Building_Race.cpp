#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        double a, b, x, y;
        cin >> a >> b >> x >> y;

        if(a / x > b / y)
            cout << "Chefina\n";
        else if(a / x < b / y)
            cout << "Chef\n";
        else 
            cout << "Both\n";
    }   

    return 0;
}