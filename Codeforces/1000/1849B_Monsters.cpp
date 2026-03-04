#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        vector<pair<int, int>> monsters;
        for(int i=1; i<=n; i++) {
            ll a; cin >> a;
            int r = a % k;
            if(r == 0) r = k;

            monsters.push_back({-r,i});
        }

        sort(monsters.begin(), monsters.end());

        for(auto &i : monsters) 
            cout << i.second << " " ;
        
        cout << "\n";

    }

    return 0;
}