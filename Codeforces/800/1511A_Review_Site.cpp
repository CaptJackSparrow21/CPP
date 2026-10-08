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
        int votes = 0;
        for(int i=0; i<n; i++) {
            int x; cin >> x;
            if(x == 1 || x == 3)
                votes++;
        }

        cout << (votes <= 0 ? 0 : votes) << '\n';
    }

    return 0;
}