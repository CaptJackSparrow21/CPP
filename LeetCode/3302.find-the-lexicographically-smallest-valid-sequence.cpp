/*
 * @lc app=leetcode id=3302 lang=cpp
 *
 * [3302] Find the Lexicographically Smallest Valid Sequence
 */

// @lc code=start

class Solution {
public:
    vector<int> validSequence(string word1, string word2) {

        int n = word1.size(), m = word2.size();
        vector<int> suf(n + 1, 0);
        int j = m - 1;
        
        for (int i = n - 1; i >= 0; i--) {
            if (j >= 0 && word1[i] == word2[j]) {
                j--;
            }
            suf[i] = m - 1 - j;
        }
        
        int i = 0;
        j = 0;
        bool used_change = false;
        vector<int> result;
        
        while (j < m && i < n) {

            if (word1[i] == word2[j]) {
                result.push_back(i);
                i++;
                j++;

            } else {

                if (!used_change && suf[i + 1] >= m - (j + 1)) {
                    result.push_back(i);
                    used_change = true;
                    i++;
                    j++;

                } else {
                    i++;
                }
            }
        }
        
        if (j == m) {
            return result;
        }
        return {};
    }
};
// @lc code=end

