#include<bits/stdc++.h>
using namespace std;
#define ll long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    string t = "hello";

    bool ok = false;
    int i=0, j=0;
    while(i < s.size() && j < 5) {
        if(s[i] == t[j]) {
            i++;
            j++;
        }
        if(j == 5) {
            ok = true;
            break;
        }
        i++;
    }

    cout << (ok ? "YES" : "NO");

    return 0;
}