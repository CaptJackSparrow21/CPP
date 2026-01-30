/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
    double myPow(double x, int n) {
        long long exp = n;
        if(exp < 0) {
            x = 1.0 / x;
            exp = -exp;
        }

        double ans = 1.0, base = x;
        while(exp > 0) {
            if(exp & 1LL) ans *= base;
            base *= base;
            exp >>= 1;
        }
        return ans;
    }
};
// @lc code=end

