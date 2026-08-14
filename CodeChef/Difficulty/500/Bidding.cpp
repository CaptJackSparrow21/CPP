#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        int ans = max({a, b, c});
        if(ans == a)
            cout << "Alice\n";
        else if(ans == b)
            cout << "Bob\n";
        else 
            cout << "Charlie\n";
    }
    
    return 0;
}