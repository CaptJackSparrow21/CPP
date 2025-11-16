#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; 
        string s;
        cin >> n >> s;
        unordered_set<char> seen;
        char last = s[0];
        bool ok = true;
        seen.insert(last);
        for(int i=1; i<n; i++) {
            if(s[i] != last) {
                if(seen.count(s[i])) {
                    ok = false;
                    break;
                }
                seen.insert(s[i]);
                last = s[i];
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }

    return 0;
}