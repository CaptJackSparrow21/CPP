#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    string pi = "314159265358979323846264338327";
    while(t--) {
        string s; cin >> s;
        ll ans = 0;
        for(int i=0; i<s.size(); i++) {
            if(s[i] == pi[i]) ans++;
            else {
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}