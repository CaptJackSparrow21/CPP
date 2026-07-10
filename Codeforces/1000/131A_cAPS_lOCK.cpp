#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    bool ok = true;
    for(int i=1; i<s.size(); i++)
        if(islower(s[i]))
            ok = false;

    if(ok)
        for(char &c : s)
            c = islower(c) ? toupper(c) : tolower(c);

    cout << s;

    return 0;
}