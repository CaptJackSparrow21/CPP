#include<bits/stdc++.h>
using namespace std;
#define ll long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string x, y;
    cin >> x >> y;

    if(x < y)   
        cout << x;
    else 
        cout << y;

    return 0;
}