/*
 * @lc app=leetcode id=3838 lang=cpp
 *
 * [3838] Weighted Word Mapping
 */

// @lc code=start
class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        vector<char> a(26);
        for(int i=0; i<26; i++) {
            a[i] = 'a' + 25 - i;
        }

        string ans = "";
        for(int i=0; i<words.size(); i++) {
            string temp = words[i];
            int sum = 0;
            for(char ch : temp) {
                sum += weights[ch - 'a'];
            }
            ans += a[sum % 26];
        }
        return ans;
    }
};
// @lc code=end

