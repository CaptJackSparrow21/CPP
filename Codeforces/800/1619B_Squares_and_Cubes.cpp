#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        set<int> a;
        for(int i=1; i*i<=n; i++)
            a.insert(i * i);
        for(int i=1; i*i*i<=n; i++)
            a.insert(i * i * i);

        cout << a.size() << '\n';
    }

    return 0;
}