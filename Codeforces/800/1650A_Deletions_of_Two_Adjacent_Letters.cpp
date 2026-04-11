#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        string s, t;
        cin >> s >> t;

        bool ok = false;
        for(int i=0; i<s.size(); i++)
            if(s[i] == t[0] && i % 2 == 0)
                ok = true;

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}