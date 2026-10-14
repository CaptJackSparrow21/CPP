#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    int ans = 0;
    for(int i=1; i<n; i++) {
        if(a[i] > a[i-1])
            continue;
        else 
            ans += a[i-1] - a[i];
    }
    cout << ans;

    return 0;
}