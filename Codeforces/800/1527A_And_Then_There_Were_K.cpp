#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll high_pow = 1LL << __lg(n);
        cout << high_pow - 1 << endl;

        // for(int i=n; i>=0; i--) {
        //     if((n & (n-1)) == 0) {
        //         cout << n-1 << endl;
        //         break;
        //     }
        //     else  {
        //         n = (n & (n-1));
        //     }
        // }
    }

    return 0;
}