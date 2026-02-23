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
        if(dividend == 0) return 0;

        ll dvd = abs((ll)dividend);
        ll dvs = abs((ll)divisor);

        ll res = 0;

        bool neg = (dividend > 0) ^ (divisor > 0);

        while(dvd >= dvs) {
            ll temp = dvs, mul = 1;
            while(dvd >= (temp << 1)) {
                temp <<= 1;
                mul <<= 1;
            }
            dvd -= temp;
            res += mul;
        }
        if(neg) res = -res;
        if(res > INT_MAX) return INT_MAX;
        if(res < INT_MIN) return INT_MIN;

        return (int) res;
    }
};
// @lc code=end

