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
        int ind = 0, nt = 0, ys = 0;
        for(char c : s) {
            if(c == 'I') ind++;
            else if(c == 'Y') ys++;
            else if(c == 'N') nt++;
        }

        if(ind > 0)
            cout << "INDIAN\n";
        else if(ind == 0 && ys == 0)
            cout << "NOT SURE\n";
        else if(nt > 0 || ys > 0)
            cout << "NOT INDIAN\n";
   }

    return 0;
}