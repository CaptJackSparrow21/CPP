/*
 * @lc app=leetcode id=3014 lang=cpp
 *
 * [3014] Minimum Number of Pushes to Type Word I
 */

// @lc code=start
class Solution {
public:
    int minimumPushes(string word) {
        int ans = 0;

        for(int i=0; i<word.size(); i++)
            ans += i / 8 + 1;

        return ans;
    }
};
// @lc code=end

