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
        int first = -1, last = -1;
        for(int i=0; i<a.size(); i++) {
            if(a[i]) {
                if(first == -1)
                    first = i;
                last = i;
            }
        }

        int ans = 0;
        for(int i=first; i<=last; i++)
            if(a[i] == 0)
                ans++;

        cout << ans << '\n';
    }

    return 0;
}