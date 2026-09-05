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
        vector<int> a(n+1);
        int sad = 0;
        for(int i=1; i<=n; i++) {
            cin >> a[i];
            if(a[i] == i)
                sad++;
        }
        cout << (sad + 1) / 2 << '\n';
    }

    return 0;
}