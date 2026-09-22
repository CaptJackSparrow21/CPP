/*
 * @lc app=leetcode id=1048 lang=cpp
 *
 * [1048] Longest String Chain
 */

// @lc code=start
class Solution {
public:
    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(),
            [](string &a, string &b) {
                return a.size() < b.size();
            });

        unordered_map<string, int> dp;
        int ans = 1;
        for(string &word : words) {
            dp[word] = 1;
            for(int i=0; i<word.size(); i++) {
                string prev = word.substr(0, i) +
                            word.substr(i + 1);

                if(dp.count(prev)) 
                    dp[word] = max(dp[word], dp[prev] + 1);
            }
            ans = max(ans, dp[word]);
        }
        return ans;
    }
};
// @lc code=end

