/*
 * @lc app=leetcode id=1922 lang=cpp
 *
 * [1922] Count Good Numbers
 */

// @lc code=start

#define ll long long
const ll MOD = 1e9+7LL;
class Solution {

ll power(ll a, ll b) {
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
        ll evenPos = (n + 1) / 2;
        ll oddPos = n / 2;
        
        ll even = power(5, evenPos);
        ll odd = power(4, oddPos);

        ll ans = (even * odd) % MOD;
        return (int)ans;
    }
};
// @lc code=end

