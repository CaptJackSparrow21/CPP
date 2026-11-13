#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;

    int low = 0, high = 2000000000LL;
    int ans = 0;

    while(low <= high) {
        int mid = low + (high - low) / 2;
        __int128 sum = (__int128)mid * (mid + 1) / 2;

        if(sum <= n) {
            ans = mid;
            low = mid + 1;
        }
        else 
            high = mid - 1;
    }

    cout << ans;

    return 0;
}