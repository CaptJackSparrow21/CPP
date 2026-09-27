#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        int mod = n % m;
        int even = n / m;
        if(mod == 0 && (even % 2 == 0))
            cout << "Yes\n";
        else 
            cout << "No\n";
    }

    return 0;
}