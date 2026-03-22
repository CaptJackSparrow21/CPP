/*
 * @lc app=leetcode id=405 lang=cpp
 *
 * [405] Convert a Number to Hexadecimal
 */

// @lc code=start
class Solution {
public:
    string toHex(int num) {
        if(num == 0) return "0";

        unsigned int n = num;
        string hex = "0123456789abcdef";
        string ans = "";

        while(n > 0) {
            ans = hex[n % 16] + ans;
            n /= 16;
        }
        return ans;
    }
};
// @lc code=end

