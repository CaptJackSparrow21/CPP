#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int x, y, z;
        cin >> x >> y >> z;
        int ans = max({x, y, z});
        if(ans == x)
            cout << "Setter\n";
        else if(ans == y)   
            cout << "Tester\n";
        else 
            cout << "Editorialist\n";
    }

    return 0;
}