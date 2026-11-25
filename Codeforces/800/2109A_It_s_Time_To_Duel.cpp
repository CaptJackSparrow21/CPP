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
        
        int prev = -1;
        bool ans = false, zero = false;

        for(int i=0; i<n; i++) {
            int x; cin >> x;

            if(x == 0) {
                zero = true;

                if(prev == 0)
                    ans = true;
            }
            prev = x;
        }

        if(!zero || ans)
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}