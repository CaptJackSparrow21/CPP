#include<bits/stdc++.h>
using namespace std;
#define int long long

int gcd1(int a, int b){
    if(b == 0) return a;
    else 
        return gcd1(b, a % b);
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> a >> b;

    int gcd2 = gcd1(a, b);
    int lcm = (a * b) / gcd2;

    cout << gcd2 << " " << lcm;

    return 0;
}