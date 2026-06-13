#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0; i<n; i++) {
            a[i] = i+1;
        }

        sort(a.begin()+k, a.end(), greater<int>());
        for(int &i : a)
            cout << i << ' ';
        cout << '\n';
    }

    return 0;
}