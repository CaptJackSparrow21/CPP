/*
 * @lc app=leetcode id=3016 lang=cpp
 *
 * [3016] Minimum Number of Pushes to Type Word II
 */

// @lc code=start
class Solution {
public:
    int minimumPushes(string word) {
        vector<int> cnt(26, 0);

        for(char c : word)
            cnt[c - 'a']++;

        sort(cnt.rbegin(), cnt.rend());
        int ans = 0;
        for(int i=0; i<26; i++)
            ans += cnt[i] * (i / 8 + 1);

        return ans;
    }
};
// @lc code=end

