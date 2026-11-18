#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for(int &i : a) cin >> i;
        sort(a.begin(), a.end());
        
        int sum = 0, ans = 0;

        for(int i=0; i<n; i++) {
            sum += a[i];

            if(sum > x)
                break;
            
            ans += (x - sum) / (i + 1) + 1;
        }
        cout << ans << '\n';
    }

    return 0;
}