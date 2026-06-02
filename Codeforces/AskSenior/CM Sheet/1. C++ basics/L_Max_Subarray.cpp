#include<bits/stdc++.h>
using namespace std;
#define ll long long

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);   
        for(int i=0; i<n; i++) 
            cin >> a[i];
        
        for(int i=0; i<n; i++) {
            int mx = INT_MIN;
            for(int j=i; j<n; j++) {
                mx = max(mx, a[j]);
                cout << mx << " "; 
            }   
        }
        cout << "\n";
    }

    return 0;
}