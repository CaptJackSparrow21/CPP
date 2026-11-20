#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s1, f1, s2, f2;
    cin >> f1 >> s1;
    cin >> f2 >> s2;

    if(s1 == s2)
        cout << "ARE Brothers";
    else    
        cout << "NOT";

    return 0;
}