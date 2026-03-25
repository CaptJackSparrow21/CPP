#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        if(a == 0)
            cout << 1 << endl;
        else {
            ll ans = (1 * a) + (2 * b);
            cout << ans + 1 << endl;
        }
    }

    return 0;   
}