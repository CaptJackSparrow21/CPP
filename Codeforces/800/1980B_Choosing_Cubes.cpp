#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, f, k;
        cin >> n >> f >> k;
        f--; k--;

        vector<int> a(n);
        for(auto &i : a) cin >> i;

        int fav = a[f];
        sort(a.rbegin(), a.rend());

        if(a[k] > fav)
            cout << "NO\n";
        else if(a[k] < fav) 
            cout << "YES\n";
        else {
            if(k == n-1 || a[k+1] < fav)    
                cout << "YES\n";
            else 
                cout << "MAYBE\n";
        }        
    }

    return 0;
}