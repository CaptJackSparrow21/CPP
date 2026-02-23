#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int cnt = 0;
        for(int i=0; i<s.size(); i++) {
            if(s[i] == s[i+1]) {
                cnt++;
                break;
            }
        }

        if(cnt > 0) cout << "1\n";
        else cout << s.size() << endl;
    }

    return 0;
}