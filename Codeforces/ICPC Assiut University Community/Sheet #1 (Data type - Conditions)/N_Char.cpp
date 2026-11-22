#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    char c; cin >> c;
    if(isupper(c))
        cout << char(tolower(c));
    else
        cout << char(toupper(c));

    return 0;
}