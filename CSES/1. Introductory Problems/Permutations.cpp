#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    if(n == 1)
        cout << 1;
    else if(n < 4)
        cout << "NO SOLUTION";
    else {
        if(n % 2) {
            int numO = n;
            for(int i=1; i<=(n+1)/2; i++) {
                cout << numO << ' ';
                numO -= 2;
            }
            int numE = n - 1;
            for(int i=1; i<=n/2; i++) {
                cout << numE << ' ';
                numE -= 2;
            }
        }
        else {
            int numO = n - 1;
            for(int i=1; i<=n/2; i++) {
                cout << numO << ' ';
                numO -= 2;
            }
            
            int numE = n;
            for(int i=1; i<=n/2; i++) {
                cout << numE << ' ';
                numE -= 2;
            }
        }
    }

    return 0;
}