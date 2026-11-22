#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    char c; cin >> c;
    if(c >= 48 && c <= 57)
        cout << "IS DIGIT";
    else if(c >= 65 && c <= 90) {
        cout << "ALPHA\n";
        cout << "IS CAPITAL";
    }
    else {
        cout << "ALPHA\n";
        cout << "IS SMALL";
    }

    return 0;
}