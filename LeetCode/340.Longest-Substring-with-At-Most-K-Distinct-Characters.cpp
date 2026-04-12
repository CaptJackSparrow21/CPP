/*
 * @lc app=leetcode id=340 lang=cpp
 *
 * [340] Longest Substring with At Most K Distinct Characters

 */

// @lc code=start
class Solution {
public:
    int kDistinctChar(string &s, int k) {
        unordered_map<char, int> freq;
        int l = 0, ans = 0;
        for(int r=0; r<s.size(); r++) {
            freq[s[r]]++;
            while(freq.size() > k) {
                freq[s[l]]--;
                if(freq[s[l]] == 0) freq.erase(s[l]);
                l++;
            }
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};
// @lc code=end

