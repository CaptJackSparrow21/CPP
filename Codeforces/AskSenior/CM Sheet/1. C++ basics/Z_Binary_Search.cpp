#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for(int &i : a) cin >> i;

    sort(a.begin(), a.end());
    
    while(q--) {
        int x; cin >> x;
        if(binary_search(a.begin(), a.end(), x))
            cout << "found\n";
        else    
            cout << "not found\n";
    }

    return 0;
}