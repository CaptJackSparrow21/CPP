#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    char c;
    cin >> a >> c >> b;

    if(a > b && c == '>')
        cout << "Right";
    else if(a < b && c == '<')
        cout << "Right";
    else if(a == b && c == '=')
        cout << "Right";
    else 
        cout << "Wrong";

    return 0;
}