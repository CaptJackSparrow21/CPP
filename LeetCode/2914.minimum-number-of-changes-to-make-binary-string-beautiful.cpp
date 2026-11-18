/*
 * @lc app=leetcode id=2914 lang=cpp
 *
 * [2914] Minimum Number of Changes to Make Binary String Beautiful
 */

// @lc code=start
class Solution {
public:
    int minChanges(string s) {
        int changes = 0;
        for(int i=0; i<s.size(); i+=2) {
            if(s[i] != s[i+1])
                changes++;
        }
        return changes;
    }
};
// @lc code=end

