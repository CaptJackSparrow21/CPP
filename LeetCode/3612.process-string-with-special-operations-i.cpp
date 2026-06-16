/*
 * @lc app=leetcode id=3612 lang=cpp
 *
 * [3612] Process String with Special Operations I
 */

// @lc code=start
class Solution {
public:
    string processStr(string s) {
        string res = "";
        for(char c : s) {
            if(c == '*') {
                if(!res.empty())
                    res.pop_back();
            }
            else if(c == '#') 
                res += res;
            else if(c == '%')
                reverse(res.begin(), res.end());
            else 
                res += c;
        }
        return res;
    }
};
// @lc code=end

