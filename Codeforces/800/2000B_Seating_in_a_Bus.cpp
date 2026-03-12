#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        set<int> occupied;
        bool ok = true;

        for(int x : a) {
            if(occupied.empty()) {
                occupied.insert(x);
                continue;
            }
            
            if(occupied.count(x-1) || occupied.count(x+1)) {
                occupied.insert(x);
            }
            else {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}