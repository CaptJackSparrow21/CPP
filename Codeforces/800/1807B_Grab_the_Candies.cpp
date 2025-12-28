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

        int mihai = 0, bianca = 0;
        for(int i=0; i<n; i++) {
            if(a[i] % 2 == 0) mihai += a[i];
            else bianca += a[i];
        }

        if(mihai > bianca) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}