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
        vector<int> a(n), b(n);
        for(int &i : a) cin >> i;
        for(int &i : b) cin >> i;

        for(int i=0; i<n; i++)
            a.push_back(b[i]);

        sort(a.begin(), a.end());

        int ans = 1, cnt = 1;

        for(int i=1; i<a.size(); i++) {
            if(a[i] == a[i-1]) {
                cnt++;
                ans = max(ans, cnt);
            }
            else 
                cnt = 1;
        }

        cout << ans << '\n';
    }

    return 0;
}