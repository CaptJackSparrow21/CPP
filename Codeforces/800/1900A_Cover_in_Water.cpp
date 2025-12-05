#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        int cnt = 0;

        for(char c : s) {
            if(c == '.') cnt++;
        }

        if(cnt == 0) {
            cout << "0\n";
            continue;
        }

        bool flag = false;
        for(int i=0; i+2<n; i++) {
            if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.'){
                flag = true;
                break;
            }
        }
        if(flag) cout << "2\n";
        else cout << cnt << endl;
    }
    return 0;
}