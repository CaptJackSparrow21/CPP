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
        vector<int> a(n);
        for(int &i : a) cin >> i;
        int one = n - 1, two = n - 2;
        int idx1 = 0, idx2 = 0;
        for(int i=0; i<n; i++) {
            if(a[i] == one)
                idx1 = i;
            else if(a[i] == two)
                idx2 = i;
        }

        vector<int> temp = a;
        sort(temp.begin(), temp.end());

        if(temp == a)
            cout << -1 << '\n';
        else if(idx1 < idx2)
            cout << idx1 + 1 << ' ' << idx2 + 1 << '\n';
        else 
            cout << idx2 + 1 << ' ' << idx1 + 1 << '\n';

    }

    return 0;
}