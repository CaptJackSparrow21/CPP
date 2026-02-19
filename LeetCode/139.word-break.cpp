/*
 * @lc app=leetcode id=139 lang=cpp
 *
 * [139] Word Break
 */

// @lc code=start
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dict(wordDict.begin(), wordDict.end());
        int n = s.size();
        int maxLen = 0;
        for(const string &w : wordDict) {
            maxLen = max(maxLen, (int)w.size());
        }

        vector<int> dp(n+1, 0);
        dp[0] = 1;

        for(int i=1; i<=n; i++) {
            int start = max(0, i - maxLen);
            for(int j=i-1; j>=start; j--) {
                if(!dp[j]) continue;
                string sub = s.substr(j, i-j);
                if(dict.count(sub)) {
                    dp[i] = 1;
                    break;
                }
            }
        }
        return dp[n];
    }
};
// @lc code=end

