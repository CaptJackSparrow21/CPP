#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    string s; cin >> s;
    set<char> good; 
    for(int i=0; i<k; i++) {
        char c; cin >> c;
        good.insert(c);
    }

    int ans = 0, len = 0;
    for(char ch : s) {
        if(good.count(ch))
            len++;
        else {
            ans += len * (len + 1) / 2;
            len = 0;
        }
    }

    ans += len * (len + 1) / 2;
    cout << ans;
    

    return 0;
}