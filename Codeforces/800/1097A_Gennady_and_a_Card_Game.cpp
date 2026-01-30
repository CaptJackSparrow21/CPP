#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    bool flag  = false;
    for(int i=0; i<5; i++) {
        string a; cin >> a;

        if(a[0] == s[0] || a[1] == s[1]) {
            flag = true;
        }
        if(flag) break;
    }

    // string s; cin >> s;
    // vector<string> a(5);
    // bool flag = false;
    // for(int i=0; i<5; i++) {
    //     cin >> a[i];

    //     char c1 = a[i][0];
    //     char c2 = a[i][1];

    //     if(c1 == s[0] || c2 == s[1]) {
    //         flag = true;
    //     }
    //     if(flag) break;
    // }
    
    if(flag) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}