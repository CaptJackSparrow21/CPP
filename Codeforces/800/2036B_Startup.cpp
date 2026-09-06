#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> sum(k+1, 0);
        for(int i=0; i<k; i++) {
            int b, c;
            cin >> b >> c;

            sum[b] += c;
        }
        sort(sum.rbegin(), sum.rend());
        int ans = 0;

        for(int i=0; i<min(n, k); i++)
            ans += sum[i];

        cout << ans << '\n';
    }

    return 0;
}