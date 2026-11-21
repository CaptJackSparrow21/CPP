#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, x;
    cin >> a >> b >> x;

    int ans = 0;
    for(int i=a; i<=b; ) {
        if(i % x == 0) {
            ans += i;
            i += x;
        }
        else    
            i++;
    }

    cout << ans;

    return 0;
}