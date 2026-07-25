#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int x; cin >> x;
        vector<int> a(x + 1);

        for(int i=1; i<=x; i++)
            cin >> a[i];

        if(a[x] != 0 && a[a[x]] != 0)
            cout << ""

    }

    return 0;
}