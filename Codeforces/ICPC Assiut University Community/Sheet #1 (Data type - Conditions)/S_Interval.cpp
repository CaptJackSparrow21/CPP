#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    double x; cin >> x;

    if(x >= 0 && x <= 25)
        cout << "Interval [0,25]";
    else if(x > 25 && x <= 50)
        cout << "Interval (25,50]";
    else if(x > 50 && x <= 75)
        cout << "Interval (50,75]";
    else if(x > 75 && x <= 100)
        cout << "Interval (75,100]";
    else 
        cout << "Out of Intervals";

    return 0;
}