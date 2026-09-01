#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int l = 0, nl = 0;
    for(int i=0; i<n; i++) {
        int x; cin >> x;
        if(x % 2) nl++;
        else l++;
    }

    cout << ((l > nl) ? "READY FOR BATTLE" : "NOT READY");

    return 0;
}