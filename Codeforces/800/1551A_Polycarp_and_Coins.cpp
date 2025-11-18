#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
    
        int ans = n / 3;
        if(n % 3 == 0) {
            cout << ans << " " << ans << endl;
        }

        else if(n % 3 == 1) {
            cout << ans + 1 << " " << ans << endl;
        }

        else {
            cout << ans << " " << ans + 1 << endl;
        }
    }

    return 0;
}