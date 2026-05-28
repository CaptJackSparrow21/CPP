#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

        vector<int> pos(26, -1);
        bool ok = true;

        for(int i=0; i<n; i++) {
            int ch = s[i] - 'a';
            int parity = i % 2;

            if(pos[ch] == -1)
                pos[ch] = parity;
            else if(pos[ch] != parity) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}