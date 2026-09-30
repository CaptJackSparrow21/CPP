#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, k, m;
        cin >> n >> k >> m;
        int bag = n / (k * m);
        if(n % (k * m) == 0)
            cout << bag << '\n';
        else 
            cout << bag + 1 << '\n';
    }

    return 0;
}