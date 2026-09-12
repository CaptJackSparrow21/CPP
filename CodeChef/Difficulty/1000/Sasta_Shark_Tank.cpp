#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        int first = x * 10;
        int second = (y / 2) * 10;
        if(first > second)
            cout << "FIRST\n";
        else if(first < second)
            cout << "SECOND\n";
        else 
            cout << "ANY\n";
    }

    return 0;
}