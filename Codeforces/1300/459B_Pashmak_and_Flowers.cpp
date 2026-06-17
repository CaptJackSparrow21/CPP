#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<int> b(n);
    for(int &i : b) cin >> i;

    sort(b.begin(), b.end());
    int mn = *min_element(b.begin(), b.end());
    int mx = *max_element(b.begin(), b.end());

    int diff = mx - mn;

    int minx = 0, maxy = 0;
    for(int i : b) {
        if(i == mn)
            minx++;
        else if(i == mx)
            maxy++;
    }

    int ans = 0;

    if(mn ==  mx) 
        ans = n * (n - 1) / 2;
    else 
        ans = minx * maxy;

    cout << diff << " " << ans;

    return 0;
}