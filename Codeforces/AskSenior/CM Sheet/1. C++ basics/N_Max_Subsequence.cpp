#include<bits/stdc++.h>
using namespace std;
#define ll long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    string s; cin >> s;

    int ans = 1;
    for(int i=1; i<n; i++) {
        if(s[i] != s[i-1]) 
            ans++;
    }

    cout << ans;

    return 0;
}