#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;
    if(a % b == 0 || b % a == 0)
        cout << "Multiples";
    else 
        cout << "No Multiples";

    return 0;
}