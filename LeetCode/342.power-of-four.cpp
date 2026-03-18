/*
 * @lc app=leetcode id=342 lang=cpp
 *
 * [342] Power of Four
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0) return false;
        while(n % 4 == 0) {
            n /= 4;
        }

        return n == 1;
    }
};
// @lc code=end

