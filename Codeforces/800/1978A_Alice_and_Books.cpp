#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        //here highest means not # of pages, it means index
        int n; cin >> n;
        int prev = 0;
        for(int i=0; i<n-1; i++) {
            int x; cin >> x;
            prev = max(x, prev);
        }
        int last; cin >> last;
        cout << prev + last << '\n';
    }

    return 0;
}