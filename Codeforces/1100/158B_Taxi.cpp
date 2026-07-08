#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int cnt[5] = {};

    for(int i=0; i<n; i++) {
        int x; cin >> x;
        cnt[x]++;
    }

    int ans = cnt[4];
    ans += cnt[3];
    cnt[1] = max(0ll, cnt[1] - cnt[3]);

    ans += cnt[2] / 2;
    cnt[2] %= 2;


    if(cnt[2]) {
        ans++;
        cnt[1] = max(0ll, cnt[1] - 2);    
    }

    ans += (cnt[1] + 3) / 4;
    
    cout << ans;

    return 0;
}