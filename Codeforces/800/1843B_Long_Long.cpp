#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        
        int sum = 0;
        int blocks = 0;
        bool neg = false;

        for(int i=0; i<n; i++) {
            int x; cin >> x;
            sum += abs(x);

            if(x < 0) {
                if(!neg) {
                    blocks++;
                    neg = true;
                }
            }
            else if(x > 0)
                neg = false;
        }

        cout << sum << " " << blocks << '\n';

    }

    return 0;
}