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
        string s; cin >> s;

        for(int i=0; i+1<n; i+=2) 
            swap(s[i], s[i+1]);
    

        for(char c : s) {
            cout << char('z' - (c - 'a'));
        }

        cout << '\n';
    }

    return 0;
}