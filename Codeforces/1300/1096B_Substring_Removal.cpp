#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 998244353;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    string s; cin >> s;

    int l = 1, r = 1;
    while(l < n && s[l] == s[0]) l++;
    while(r < n && s[n-r-1] == s[n-1]) r++;

    if(s[0] == s[n-1])
        cout << (l +  1) * (r + 1) % mod;
    else 
        cout << (l + r + 1) % mod;

    return 0;
}