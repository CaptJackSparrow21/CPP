//https://www.youtube.com/watch?v=-6uez-BhEhU
//watch video for understanding
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7; 

ll fact(ll n) {
    ll res = 1;
    for(ll i=2; i<=n; i++) 
        res = (res * i) % MOD;
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, pos;
    cin >> n >> x >> pos;

    ll l = 0;
    ll r = n;
    ll smaller = x-1;
    ll greater = n-x;
    ll sum = 1;
    ll space = n-1;

    while(l < r) {
        ll mid = (l + r) / 2;
        if(mid == pos) {
            l = mid + 1;
        }
        else if(mid > pos) {
            sum = (sum % MOD * greater % MOD) % MOD;
            greater--;
            space--;
            r = mid; 
        }
        else {
            sum = (sum % MOD * smaller % MOD) % MOD;
            smaller--;
            space--;
            l = mid+1;
        }
    }

    sum = (sum * fact(space)) % MOD;
    
    cout << sum << endl;

    return 0;
}