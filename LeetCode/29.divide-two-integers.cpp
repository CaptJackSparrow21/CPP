/*
 * @lc app=leetcode id=29 lang=cpp
 *
 * [29] Divide Two Integers
 */

// @lc code=start
#define ll long long
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == INT_MIN && divisor == -1) return INT_MAX;

        ll dvd = llabs(dividend);
        ll dvs = llabs(divisor);
        ll ans = 0;

        for(int i=31; i>=0; i--) {
            if((dvd >> i) >= dvs) {
                ans += (1LL << i);
                dvd -= (dvs << i);
            }
        }

        if((dividend > 0) ^ (divisor > 0))
            ans = -ans;

        return (int)ans;
    }
};
// @lc code=end

