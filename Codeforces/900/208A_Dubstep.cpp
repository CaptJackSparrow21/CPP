#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;

    while(s.find("WUB") != string::npos)
        s.replace(s.find("WUB"), 3, " ");

    stringstream ss(s);
    string x;

    while(ss >> x)
        cout << x << " ";

    return 0;
}