#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n ; cin >> n;
        int k; cin >> k;

        vector<int > a(n);
        bool found = false;

        for(int i=0; i<n; i++) {
            cin >> a[i];
            if(a[i] == k) found = true;
        }

        if(found) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}