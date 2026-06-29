#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    int dng = 0;
    string zero = "0000000";
    string one = "1111111";
    
    if(s.find(zero) != string::npos)
        cout << "YES";
    else if(s.find(one) != string::npos)
        cout << "YES";
    else    
        cout << "NO";

    return 0;
}