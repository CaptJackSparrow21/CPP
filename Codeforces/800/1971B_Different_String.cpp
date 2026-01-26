#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        string t = s;
        sort(t.begin(), t.end());
        if(t.front() == t.back()) {
            cout << "NO" << endl;
        }
        else {
            if(t == s) {
                reverse(s.begin(), s.end());
                cout << "YES\n";
                cout << s << endl;
            } else {
                cout << "YES\n";
                cout << t << endl;
            }
        }
    }
    return 0;
}