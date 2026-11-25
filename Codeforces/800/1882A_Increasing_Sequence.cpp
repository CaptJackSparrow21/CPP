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

        int prev = 0;

        for(int i=0; i<n; i++) {
            int x; cin >> x;

            if(i == 0)
                prev = (x == 1 ? 2 : 1);
            else {
                prev++;

                if(prev == x)
                    prev++;
            }
        }
        cout << prev << '\n';
    }

    return 0;
}