#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n), b(n);

        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];

        ll ans = 1;
        for(int i=0; i<n; i++) {
            if(a[i] > b[i]) 
                ans += a[i] - b[i];
        }
        cout << ans << endl;
    }

    return 0;
}