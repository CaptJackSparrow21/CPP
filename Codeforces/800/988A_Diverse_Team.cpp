#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    set<int> st;
    vector<int> ans;

    for(int i=1; i<=n; i++) {
        int x; cin >> x;

        if(!st.count(x) && ans.size() < k) {
            st.insert(x);
            ans.push_back(i);
        }
    }

    if(ans.size() < k)
        cout << "NO\n";
    else {
        cout << "YES\n";
        for(int i : ans)
            cout << i << ' ';
    }


    return 0;
}