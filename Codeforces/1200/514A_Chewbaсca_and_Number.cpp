#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;

    for(int i=0; i<s.size(); i++) {
        if(s[i] >= '5' && !(i == 0 && s[i] == '9'))
            s[i] = '9' - s[i] + '0';
    }

    cout << s;

    return 0;
}