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
        vector<int> d(n);
        for(int &x : d) cin >> x;
        for(int &x : d) {
            int y; cin >> y;
            x = y - x;
        }

        sort(d.begin(), d.end());
        int i = 0, j = n-1, ans = 0;

        while(i < j) {
            if(d[i] + d[j] >= 0) {
                ans++;
                i++;
                j--;
            }
            else 
                i++;
        }
        cout << ans << '\n';
    }

    return 0;
}