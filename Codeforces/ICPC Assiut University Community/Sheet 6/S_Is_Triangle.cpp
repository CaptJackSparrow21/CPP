#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    bool ok = false;
    if((a+b) > c && (a+c) > b && (b+c) > a)
        ok = true;

    double s = 0.0, area = 0.0;
    if(ok) {
        s += (a+b+c) / 2;
        area += sqrt(s * (s-a) * (s-b) * (s-c));
    }

    if(ok) {
        cout << "Valid\n";
        cout << fixed << setprecision(6) << area;
    }
    else 
        cout << "Invalid";

    return 0;
}