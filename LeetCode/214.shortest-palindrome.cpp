/*
 * @lc app=leetcode id=214 lang=cpp
 *
 * [214] Shortest Palindrome
 */

// @lc code=start
class Solution {
public:
    string shortestPalindrome(string s) {
        string rev = s;
        reverse(rev.begin(), rev.end());
        
        string combined = s + '#' + rev;
        int n = combined.size();
        vector<int> lps(n, 0);
        for(int i=1; i<n; i++) {
            int j = lps[i - 1];
            while(j > 0 && combined[i] != combined[j])
                j = lps[j - 1];

            if(combined[i] == combined[j])
                j++;
            lps[i] = j;
        }
        int len = lps[n - 1];
        return rev.substr(0, s.size() - len) + s;
    }
};
// @lc code=end

