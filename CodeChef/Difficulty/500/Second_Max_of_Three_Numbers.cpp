#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    while(n--) {
        vector<int> a(3);
        for(int &i : a) cin >> i;
        sort(a.rbegin(), a.rend());
        cout << a[1] << '\n';
    }

    return 0;
}