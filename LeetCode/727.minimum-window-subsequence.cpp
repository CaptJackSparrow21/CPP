/*
 * @lc app=leetcode id=727 lang=cpp
 *
 * [727] minimum window subsequence
 */

// @lc code=start
class Solution {
public:
    string minWindow(string s1, string s2) {
        int n = s1.size(), m = s2.size();
        int start = -1, minLen = INT_MAX;
        int i = 0;

        while(i < n) {
            int j = 0;
            while(i < n && j < m) {
                if(s1[i] == s2[j])
                    j++;
                i++;
            }
            if(j < m) break;

            int end = i - 1;
            j = m - 1;
            while(end >= 0 && j >= 0) {
                if(s1[end] == s2[j])
                    j--;
                end--;
            }
            end++;

            if(i - end < minLen) {
                minLen = i - end;
                start = end;
            }
            i = end + 1;
        }
        return start == -1 ? "" : s1.substr(start, minLen);
    }
};
// @lc code=end