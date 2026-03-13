#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        int axor = 0, ans = 0;
        for(int i=0; i<n; i++) {
            cin >> a[i];
            axor = axor ^ a[i];
        }

        if(n & 1) cout << axor << endl;
        else {
            if(axor == 0) cout << 0 << endl;
            else cout << -1 << endl;
        }
    }

    return 0;
}