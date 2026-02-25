/*
 * @lc app=leetcode id=38 lang=cpp
 *
 * [38] Count and Say
 */

// @lc code=start
class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        for(int i=1; i<n; i++) {
            string next = "";
            int count = 1;
            for(int j=1; j<=s.size(); j++) {
                if(j<s.size() && s[j] == s[j-1]) {
                    count++;
                }
                else {
                    next += to_string(count) + s[j-1];
                    count = 1;
                }
            }
            s = next;
        }
        return s;
    }
};
// @lc code=end

