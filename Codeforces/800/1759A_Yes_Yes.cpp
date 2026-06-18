#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int n = s.size();
        string full = "";

        for(int i=0; i<18; i++)
            full += "Yes";

        if(full.find(s) != string::npos)
            cout << "YES\n";
        else    
            cout << "NO\n";

    }

    return 0;
}