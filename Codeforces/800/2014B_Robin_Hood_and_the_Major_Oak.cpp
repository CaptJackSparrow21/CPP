#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;

        int l = n - k + 1;
        int r = n;

        int odd = (r+1) / 2 - (l / 2); 

        if(odd % 2 == 0)
            cout << "YES\n";
        else 
            cout << "NO\n";
     }

    return 0;
}