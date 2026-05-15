/*
 * @lc app=leetcode id=1137 lang=cpp
 *
 * [1137] N-th Tribonacci Number
 */

// @lc code=start
class Solution {
public:
    int tribonacci(int n) {
        if(n == 0) return 0;
        if(n <= 2) return 1;

        int a=0, b=1, c=1;

        for(int i=3; i<=n; i++) {
            int d = a + b + c;

            a = b;
            b = c;
            c = d;
        }
        return c;
    }
};
// @lc code=end

