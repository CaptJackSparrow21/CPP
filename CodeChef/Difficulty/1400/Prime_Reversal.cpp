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
        string a, b;
        cin >> a >> b;

        int zero1 = 0, one1 = 0, zero2 = 0, one2 = 0;

        for(char c : a) {
            if(c == '0') zero1++;
            else one1++;
        }

        for(char c : b) {
            if(c == '0') zero2++;
            else one2++;
        }

        if(zero1 == zero2)
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}