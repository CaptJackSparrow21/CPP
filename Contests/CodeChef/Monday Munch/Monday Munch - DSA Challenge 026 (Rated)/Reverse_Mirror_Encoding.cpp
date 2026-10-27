#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s, ans; cin >> s;

    for(int i=0; i<s.size(); i++) {
        char c;
        if(s[i] <= 'n')
            c = 'n' - (s[i] - 'a');
        else {
            c = 'z' - (s[i] - 'o');
            i++;
        }
        ans += c;
    }

    cout << ans << '\n';


    return 0;
}