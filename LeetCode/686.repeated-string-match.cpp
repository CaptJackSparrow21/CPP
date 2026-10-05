/*
 * @lc app=leetcode id=686 lang=cpp
 *
 * [686] Repeated String Match
 */

// @lc code=start
class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string s;
        int count = 0;
        while(s.size() < b.size()) {
            s += a;
            count++;
        }

        if(s.find(b) != string::npos)
            return count;

        s += a;
        count++;

        if(s.find(b) != string::npos)
            return count;

        return -1;
    }
};
// @lc code=end

