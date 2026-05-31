#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int &i : a) cin >> i;

        bool ok = false;

        for(int i=0; i<n; i++) {
            for(int j=i+1; j<n; j++) {
                if(__gcd(a[i], a[j]) <= 2) {
                    ok = true;
                    break;
                }
            }
            if(ok)  
                break;
        }
        cout << (ok ? "Yes\n" : "No\n");
    }
    return 0;
}