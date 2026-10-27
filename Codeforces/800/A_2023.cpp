#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t; cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> b(n);
        for(int &i : b) cin >> i;
        int prod = 1;
        for(int i : b)
            prod *= i;
        
        if(2023 % prod != 0)
            cout << "NO\n";
        else {
            cout << "YES\n";
            cout << 2023 / prod << ' ';
            for(int i=0; i<k-1; i++)
                cout << 1 << ' ';
            cout << '\n'; 
        }

    }

    return 0;
}