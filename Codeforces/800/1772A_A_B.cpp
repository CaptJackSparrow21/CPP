#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    // while(t--) {
    //     int a,b;
    //     char c = '+';

    //     cin >> a >> c >> b;
    //     cout <<  a + b << endl;
    // }
    
    while(t--) {
        string s; cin >> s;
        cout << (s[0] - '0') + (s[2] - '0') << endl;
    }

    return 0;
}