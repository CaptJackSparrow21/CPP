/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 */

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size()-1;
        int j = b.size()-1;
        int s = 0; // carry
        string ans;

        while(i >= 0 || j >= 0 || s) {
            if(i >= 0) s += a[i--] - '0';
            if(j >= 0) s += b[j--] - '0';
            ans.push_back(char('0' + (s % 2)));

            s /= 2;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end

