#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, s, x;
        cin >> n >> s >> x;

        vector<int> a(n);
        int sum = 0;
        for(int i=0; i<n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        if(sum > s) cout << "NO\n";
        else {
            if((s - sum) % x == 0) cout << "YES\n";
            else cout << "NO\n";
        }
    }

    return 0;
}