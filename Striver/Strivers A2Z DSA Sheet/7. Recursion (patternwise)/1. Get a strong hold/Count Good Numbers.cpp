//https://takeuforward.org/plus/dsa/problems/count-good-numbers

#include<bits/stdc++.h>
using namespace std;

#define ll long long
const ll MOD =  1e9+7LL;
class Solution {

// power computation in O(log n)
    power(ll a, ll b){
        ll exp = b;
        ll ans = 1, base = a;
        while(exp > 0) {
            if(exp & 1LL) ans = (ans * base) % MOD;
            base = (base * base) % MOD;
            exp >>= 1;
        }
        return ans;
    }

public:
    int countGoodNumbers(long long n) {
        ll evenPos = (n+1) / 2;
        ll oddPos = n / 2;

        ll even = power(5, evenPos);
        ll odd = power(4, oddPos);

        ll ans = (even * odd) % MOD;
        return (int) ans;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n ; cin >> n;
    Solution sol;
    cout << sol.countGoodNumbers(n) << endl;

    return 0;
}