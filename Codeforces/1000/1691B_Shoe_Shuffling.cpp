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
        vector<int> a(n), p(n);
        for(int &i : a) cin >> i;

        iota(p.begin(), p.end(), 1);
        int l = 0;
        bool possible = true;

        while(l < n) {
            int r = l;
            while(r + 1 < n && a[r] == a[r + 1])    
                r++;

            if(l == r) {
                possible = false;
                break;
            }

            rotate(p.begin() + l, p.begin() + r, p.begin() + r + 1);
            l = r + 1;
        }

        if(!possible)
            cout << -1 << '\n';
        else {
            for(int x : p)  
                cout << x << ' ';
            cout << '\n';
        }

    }

    return 0;
}