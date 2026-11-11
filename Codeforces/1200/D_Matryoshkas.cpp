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
        sort(a.begin(), a.end());
        int ans = 0, prev = 0, prevFreq = 0;

        for(int i=0; i<n; ) {
            int x = a[i], cnt = 0;

            while(i < n && a[i] == x) {
                cnt++;
                i++;
            }

            if(x != prev + 1)
                prevFreq = 0;

            ans += max(0LL, cnt - prevFreq);

            prev = x;
            prevFreq = cnt;
        }
        cout << ans << '\n';
    }

    return 0;
}