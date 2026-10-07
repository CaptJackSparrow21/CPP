#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        string s; cin >> s;
        string l; cin >> l;

        vector<char> a(n);
        for(int i=0; i<n; i++) {
            char ch = s[i];
            if(l.find(ch) != string::npos)
                a[i] = 'L';
            else
                a[i] = 'R';
        }

        int mx = 1, ans = 0;
        for(int i=0; i<n-1; i++) {
            if(a[i] == a[i+1]) {
                mx++;
                ans = max(ans, mx);
            }
            else 
                mx = 1;
        }

        cout << ans << '\n';
    }

    return 0;
}