#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> a(n+1), ans(n+1);
    set<int> s;

    for(int i=1; i<=n; i++)
        cin >> a[i];
    
    for(int i=n; i>=1; i--) {
        s.insert(a[i]);
        ans[i] = s.size();
    }

    while(m--) {
        int l; cin >> l;
        cout << ans[l] << '\n';
    }


    return 0;
}