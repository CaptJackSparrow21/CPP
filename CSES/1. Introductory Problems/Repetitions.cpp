#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    int count = 1, ans = 1;
    for(int i=1; i<s.size(); i++) {
        if(s[i] == s[i - 1])
            count++;
        else 
            count = 1;
        
        ans = max(ans, count);
    }
    cout << ans;

    return 0;
}