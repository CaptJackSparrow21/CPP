#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    // while(t--) {
    //     char c; cin >> c;

    //     if(c == 'c' || c == 'o' || c == 'd' || c == 'e' ||
    //                  c == 'f' || c == 'r' || c == 's') {
    //         cout << "YES\n";
    //     } else {
    //         cout << "NO\n";
    //     }
    // }

    //string s = "codeforces";
    while(t--) {
        char c; cin >> c;

        //if(s.find(c) != string::npos) {
        if(string("codeforces").find(c) != string::npos) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}