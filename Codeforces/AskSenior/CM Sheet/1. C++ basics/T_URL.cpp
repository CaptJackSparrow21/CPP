#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);

    int pos = s.find('?');
    s = s.substr(pos + 1);

    for(char &c : s) {
        if(c == '=' || c == '&')
            c = ' ';
    }

    stringstream ss(s);
    string param, value;

    while(ss >> param >> value)
        cout << param << ": " << value << '\n';

    return 0;
}