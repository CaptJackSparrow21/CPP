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
        vector<int> a(n);
        for(int &i : a) cin >> i;
        vector<int> even, odd;
        for(int i : a) {
            if(i % 2)
                odd.push_back(i);
            else 
                even.push_back(i);
        }

        for(int i : even)
            cout << i << ' ';
        for(int i : odd)
            cout << i << ' ';
        cout << '\n';
    }

    return 0;
}