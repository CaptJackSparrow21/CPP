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
        
        int e = 0, o = 0;
        for(int i=0; i<n; i++) {
            int x; cin >> x;
            if(x % 2) o++;
            else e++;
        }
        cout << min(e, o) << '\n';
    }

    return 0;
}