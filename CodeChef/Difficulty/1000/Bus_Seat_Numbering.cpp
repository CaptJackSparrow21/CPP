#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        if(n <= 10)   
            cout << "Lower Double\n";
        else if(n <= 15)
            cout << "Lower Single\n";
        else if(n <= 25)
            cout << "Upper Double\n";
        else 
            cout << "Upper Single\n";
    }

    return 0;
}