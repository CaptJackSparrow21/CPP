#include<bits/stdc++.h>
using namespace std;
#define ll long long

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int &i : a) cin >> i;

        set<int> st;
        int ans = 0;

        for(int i=n-1; i>=0; i--) {
            if(st.count(a[i])) {
                ans = i + 1;
                break;
            }
            st.insert(a[i]);
        }
        cout << ans << "\n";
    }

    return 0;
}