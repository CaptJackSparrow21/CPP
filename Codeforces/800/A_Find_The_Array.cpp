#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int s; cin >> s;
        if(s == 1)
            cout << "1\n";
        else if(s % 7 == 0) 
            cout << s / 7 << '\n';
        else if(s % 8 == 0)
            cout << s / 8 << '\n';
    }

    return 0;
}