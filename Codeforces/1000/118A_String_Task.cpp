#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    for(char c : s) {
        c = tolower(c);

        if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y') {
            cout << '.' << c ;
        }
    }

    return 0;
}