#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string p; cin >> p;
    for(char c : p) {
        if(c == 'H' || c == 'Q' || c == '9') {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}
