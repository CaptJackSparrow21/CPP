#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

        if(n < 2)
            cout << "No\n";
        else {
            if(s[0] == s[n-1])
                cout << "No\n";
            else 
                cout << "Yes\n";
        }
    }

    return 0;
}