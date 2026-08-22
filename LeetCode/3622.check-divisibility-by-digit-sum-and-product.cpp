/*
 * @lc app=leetcode id=3622 lang=cpp
 *
 * [3622] Check Divisibility by Digit Sum and Product
 */

// @lc code=start
class Solution {
public:
    bool checkDivisibility(int n) {
        int org = n;
        int sum = 0, prod = 1;
        while(n > 0) {
            sum += n % 10;
            prod *= n % 10;
            n /= 10;
        }

        int ans = sum + prod;
        if(org % ans == 0)
            return true;
        return false;
    }
};
// @lc code=end

