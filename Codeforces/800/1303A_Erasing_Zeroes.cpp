#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        string s;
        cin >> s;

        int first = s.find('1');
        int last = s.rfind('1');

        if(first == (int)string::npos || first == last) {
            cout << 0 << endl;
            continue;
        }

        int ans = 0;
        for(int i=first+1; i<last; i++) {
            if(s[i] =='0') ans++;
        }

        cout << ans << endl;
    }

    return 0;
}