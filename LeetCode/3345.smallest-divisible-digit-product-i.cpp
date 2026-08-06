/*
 * @lc app=leetcode id=3345 lang=cpp
 *
 * [3345] Smallest Divisible Digit Product I
 */

// @lc code=start
class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n; ;i++) {
            int x = i;
            int prod = 1;
            while(x > 0) {
                prod *= x % 10;
                x /= 10;
            }

            if(prod % t == 0) {
                return i;
            }
        }
        return -1;
    }
};
// @lc code=end

