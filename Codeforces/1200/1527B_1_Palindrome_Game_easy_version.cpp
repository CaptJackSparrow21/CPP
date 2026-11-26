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
        int zero = 0;
        for(char c : s)
            if(c == '0')
                zero++;

        if(zero == 1)
            cout << "BOB\n";
        else if(zero % 2 == 1)
            cout << "ALICE\n";
        else 
            cout << "BOB\n";
    }

    return 0;
}