#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int cnt = 0;
        for(int i=0; i<2; i++) {
            int x, y;
            cin >> x >> y;
            if(x == 1) cnt++;
            if(y == 1) cnt++;
        }

        if(cnt == 0)
            cout << 0 << '\n';
        else if(cnt == 4)
            cout << 2 << '\n';
        else 
            cout << 1 << '\n';
    }

    return 0;
}