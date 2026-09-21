#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int ans = 0;
        set<char> st;
        for(int i=0; i<s.size(); i++) {
            st.insert(s[i]);
            if(st.size() > 3) {
                ans++;
                st.clear();
                st.insert(s[i]);
            }
        }
        if(!st.empty())
            ans++;

        cout << ans << '\n';
    }

    return 0;
}