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
        string s; cin >> s;
        int fields = n / k, ans = 0;
        for(int i=0; i<fields; i++) {
            string farm = s.substr(i, k);
            for(auto c : farm)
        }
    }

    return 0;
}