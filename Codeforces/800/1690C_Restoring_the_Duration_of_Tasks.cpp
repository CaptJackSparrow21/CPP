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
        vector<int> s(n), f(n);
        for(int &i : s) cin >> i;
        for(int &i : f) cin >> i;

        vector<int> ans;
        ans.push_back(f[0] - s[0]);
        for(int i=1; i<n; i++) {
            if(s[i] >= f[i-1])
                ans.push_back(f[i] - s[i]);
            else if(s[i] < f[i-1])
                ans.push_back(f[i] - f[i-1]);
        }

        for(int i : ans)
            cout << i << ' ';
        cout << '\n';
    }

    return 0;
}