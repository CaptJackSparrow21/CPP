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

        if(n % 2 == 0) {
            for(int i=0; i<n; i+=2) 
                swap(s[i], s[i+1]);
        }
        else {
            for(int i=0; i<n-1; i+=2)
                swap(s[i], s[i+1]);
        }

        
    }

    return 0;
}