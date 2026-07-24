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
        vector<int> a(n), b(n);
        for(int &i : a) cin >> i;
        for(int &i : b) cin >> i;

        for(int i=0; i<n; i++)
            if(a[i] > b[i])
                swap(a[i], b[i]);

        int mxa = *max_element(a.begin(), a.end());
        int mxb = *max_element(b.begin(), b.end());
        
        cout << mxa * mxb << '\n';
    }

    return 0;
}