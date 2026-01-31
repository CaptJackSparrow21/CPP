#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        vector<int> dup = a;
        sort(dup.begin(), dup.end());
        int mx = dup[n-1];
        int two_mx = dup[n-2];

        for(int i=0; i<n; i++) {
            if(a[i] == mx) {
                cout << mx - two_mx << " " ;
            }
            else {
                cout << a[i] - mx << " ";
            }
        }
        cout << endl;
    }

    return 0;
}