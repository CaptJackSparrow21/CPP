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
        vector<int> a(n);
        for(int &i : a) cin >> i;

        unordered_map<int, int> freq;
        for(int i=0; i<n; i++) {
            freq[a[i]]++;
        }
        int mx = 0;
        for(auto it : freq)     
            mx = max(mx, it.second);

        cout << n - mx << '\n';
    }

    return 0;
}