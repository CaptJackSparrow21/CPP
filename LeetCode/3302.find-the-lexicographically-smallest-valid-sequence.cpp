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
        vector<int> suff(m + 1, n);
        int j = m - 1;

        for(int i=n-1; i>=0 && j>=0; i--) {
            if(word1[i] == word2[j]) {
                suff[j] = i;
                j--;
            }
        }

        vector<int> ans;
        int i = 0;
        bool used = false;

        for(int j=0; j<m && i<n; j++) {
            while(i < n) {
                if(word1[i] == word2[j]) {
                    ans.push_back(i++);
                    break;
                }

                if(!used && j+1 <= m && suff[j+1] > i) {
                    ans.push_back(i++);
                    used = true;
                    break;
                }
                i++;
            }
        }
        return ans.size() == m ? ans : vector<int> ();
    }
};
// @lc code=end

