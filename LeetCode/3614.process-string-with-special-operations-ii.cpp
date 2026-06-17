/*
 * @lc app=leetcode id=3614 lang=cpp
 *
 * [3614] Process String with Special Operations II
 */

// @lc code=start
class Solution {
public:
    char processStr(string s, long long k) {
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
        
        if(k >= res[k])
            return '.';

        return res[k];
    }
};
// @lc code=end

