#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    int ans = 0;
    while(n--) {
        int x; cin >> x;
        if(x % k == 0)
            ans++;
    }
    

    return 0;
}