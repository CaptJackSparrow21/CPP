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

        vector<int> freqA(2 * n + 1, 0), freqB(2 * n + 1, 0);
        int cnt = 1;

        for(int i=1; i<n; i++) {
            if(a[i] == a[i-1])
                cnt++;
            else    
                cnt = 1;

            freqA[a[i]] = max(freqA[a[i]], cnt);
        }

        freqA[a[0]] = max(freqA[a[0]], 1LL);

        cnt = 1;

        for(int i=1; i<n; i++) {
            if(b[i] == b[i-1])
                cnt++;
            else
                cnt = 1;

            freqB[b[i]] = max(freqB[b[i]], cnt);
        }

        freqB[b[0]] = max(freqB[b[0]], 1LL);

        int ans = 0;

        for(int x=1; x <= 2 * n; x++)
            ans = max(ans, freqA[x] + freqB[x]);

        cout << ans << '\n';
    }

    return 0;
}