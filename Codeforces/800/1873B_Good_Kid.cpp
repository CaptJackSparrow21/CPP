#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        vector<int> a(n);
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int ans = 1;
        a[0]++;
        for(int i=0; i<n; i++) {
            ans *= a[i];
        }
        
        cout << ans << endl;
    }
    return 0;
}