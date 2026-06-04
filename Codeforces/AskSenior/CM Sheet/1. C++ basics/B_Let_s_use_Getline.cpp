#include<bits/stdc++.h>
using namespace std;
#define ll long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);

    for(int i=0; i<s.size(); i++) {
        if(s[i] == '\\')
            break;
        else 
            cout << s[i];
    }

    return 0;
}