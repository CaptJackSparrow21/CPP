/*
 * @lc app=leetcode id=1541 lang=cpp
 *
 * [1541] Minimum Insertions to Balance a Parentheses String
 */

// @lc code=start
class Solution {
public:
    int minInsertions(string s) {
        int open = 0, ans = 0;

        for(int i=0; i<s.size(); i++) {
            if(s[i] == '(') open++;
            else {
                if(i + 1 < s.size() && s[i+1] == ')')
                    i++;
                else 
                    ans++;

                if(open > 0)
                    open--;
                else    
                    ans++;
            }
        }
        return ans + open * 2;
    }
};
// @lc code=end

