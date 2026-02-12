/*
 * @lc app=leetcode id=12 lang=cpp
 *
 * [12] Integer to Roman
 */

// @lc code=start
class Solution {
public:
    string intToRoman(int num) {
        int vals[] = {1000, 900, 500, 400, 100,
             90, 50, 40, 10, 9, 5, 4, 1};
        string symbs[] = {"M", "CM", "D", "CD", "C",
            "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        
        string ans = "";

        for(int i=0; i<13; i++) {
            while(num >= vals[i]) {
                ans += symbs[i];
                num -= vals[i];
            }
        }
        return ans;
    }
};
// @lc code=end

