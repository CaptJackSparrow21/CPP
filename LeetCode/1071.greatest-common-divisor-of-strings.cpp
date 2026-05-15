/*
 * @lc app=leetcode id=1071 lang=cpp
 *
 * [1071] Greatest Common Divisor of Strings
 */

// @lc code=start
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if((str1+str2) != (str2+str1))
            return "";

        int k = gcd(str1.size(), str2.size());
        string ans = str2.substr(0, k);
        return ans;
    }
};
// @lc code=end

