#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9;

int ncr[1001][1001];
void ncr_fact(int n) {
    ncr[0][0] = 1;

    for(int i=1; i<=n; i++) {
        for(int j=0;j<=i; j++) {
            if(j == 0 || j == i)
                ncr[i][j] = 1;
            else 
                ncr[i][j] = (ncr[i-1][j-1] + ncr[i-1][j]) % mod;
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
   
    while(t--) {
        int n; cin >> n;
        ncr_fact(n);
        for(int i=0; i<=n; i++) {
            cout << ncr[n][i];
            if(i != n)
                cout << " ";
        }
        cout << '\n';
    }

    return 0;
}