#include<bits/stdc++.h>
using namespace std;
#define ll long long

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    int x; cin >> x;

    int ans = -1;
    for(int i=0; i<n; i++) {
        if(a[i] == x) {
            ans = i;
            break;
        }
    }

    cout << ans;

    return 0;
}