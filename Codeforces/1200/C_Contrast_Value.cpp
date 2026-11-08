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
        vector<int> a(n);
        for(int &i : a) cin >> i;

        a.erase(unique(a.begin(), a.end()), a.end());

        int ans = 1;

        for(int i=1; i<a.size()-1; i++) {
            if((a[i] > a[i-1] && a[i] > a[i + 1]) ||
                )
        }
    }

    return 0;
}