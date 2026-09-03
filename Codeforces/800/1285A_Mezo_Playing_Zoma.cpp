#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    string s; cin >> s;

    int l = 0, r = 0;
    for(char c : s) {
        if(c == 'L') l++;
        else r++;
    }

    cout << l + r + 1;

    return 0;
}