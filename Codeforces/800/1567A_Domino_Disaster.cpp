#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s;
        cin >> s;

        for(char &c : s) {
            if(c == 'U')
                c = 'D';
            else if(c =='D')
                c = 'U';
        }
                            
        cout << s << '\n';
    }

    return 0;
}