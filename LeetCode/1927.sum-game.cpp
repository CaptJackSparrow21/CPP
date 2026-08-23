/*
 * @lc app=leetcode id=1927 lang=cpp
 *
 * [1927] Sum Game
 */

// @lc code=start
class Solution {
public:
    bool sumGame(string num) {
        int n = num.size(), diff = 0, q = 0;

        for(int i=0; i<n; i++) {
            if(num[i] == '?')
                q += (i < n / 2 ? 1 : -1);
            else
                diff += (i < n / 2 ? 
                        num[i] - '0' : -(num[i] - '0'));
        }

        if(q & 1)
            return true;

        return diff != -9 * q / 2;
    }
};
// @lc code=end

