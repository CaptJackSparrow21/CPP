#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--) {
        string s; cin >> s;
        cout << ((s[0]=='a' || s[1]=='b' || s[2]=='c') ? "YES\n" : "NO\n" );
    }

    // while(t--) {
    //     string s; cin >> s;
    //     if(s == "abc" || s == "acb" || s == "bac" || s == "cba") {
    //         cout << "YES\n";
    //     }
    //     else {
    //         cout << "NO\n";
    //     }
    // }
    return 0;
}