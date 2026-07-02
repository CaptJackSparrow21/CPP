#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s; cin >> s;
    string t = "hello";

    int j=0;
    for(char c : s) {
        if(j < 5 && c == t[j]) 
            j++;
    }

    cout << (j == 5 ? "YES" : "NO");
        
    return 0;
}