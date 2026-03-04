#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll q; cin >> q;
    while(q--) {
        cin.ignore();
        ll n, k; cin >> n >> k;
        vector<ll> pos(k), val(k);
        for(ll i=0; i<k; i++) cin >> pos[i];
        for(ll i=0; i<k; i++) cin >> val[i];


        vector<ll> temp(n, 1e18);

        for(ll i=0; i<k; i++)
            temp[pos[i] - 1] = val[i];

            //left to right
            for(int i=1; i<n; i++) 
            temp[i] = min(temp[i], temp[i-1] + 1);

            //right to left
            for(int i=n-2; i>=0; i--)
                temp[i] = min(temp[i], temp[i+1] + 1);

            for(auto i : temp)
                cout << i << " ";
            
            cout << endl;
            
    }

    return 0;
}