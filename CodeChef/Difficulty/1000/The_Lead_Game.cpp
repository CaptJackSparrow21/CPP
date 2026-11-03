#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    int ans = 0, winner = 0, one = 0, two = 0;
    for(int i=1; i<=n; i++) {
        int x, y;
        cin >> x >> y;

        one += x;
        two += y;

        if(one > two) {
            if(one - two > ans) {
                ans = one - two;
                winner = 1;
            }
        }
        else {
            if(two - one > ans) {
                ans = two - one;
                winner = 2;
            }
        }        
    }

    cout << winner << ' ' << ans;

    return 0;
}