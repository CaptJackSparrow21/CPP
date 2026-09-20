/*
 * @lc app=leetcode id=3498 lang=cpp
 *
 * [3498] Reverse Degree of a String
 */

// @lc code=start
class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        for(int i=1; i<=s.size(); i++) {
            ans += (26 - (s[i-1] - 'a')) * i;
        }
        return ans;
    }
};
// @lc code=end

