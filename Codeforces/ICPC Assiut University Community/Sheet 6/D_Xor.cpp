#include<bits/stdc++.h>
using namespace std;
#define int long long

int fun(int q, int a, int b) {
    if(q == 1) 
        return a;
    else if(q == 2)
        return b;
    else 
        return fun(q-1, a, b) ^ fun(q-2, a, b);
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, q;
    cin >> a >> b >> q;
    cout << fun(q, a, b);

    return 0;
}