#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;

    if(s == '+') {
        if(c == a + b)
            cout << "Yes";
        else 
            cout << a + b;
    }
    else if(s == '-') {
        if(c == a - b)
            cout << "Yes";
        else 
            cout << a - b;
    }
    else if(s == '*') {
        if(c == a * b)
            cout << "Yes";
        else 
            cout << a * b;
    }

    return 0;
}