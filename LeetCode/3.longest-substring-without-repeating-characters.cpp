/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int l=0, ans = 0;

        for(int r=0; r<s.size(); r++) {
            if(mp.count(s[r]) && mp[s[r]] >= l) 
                l = mp[s[r]] + 1;
            mp[s[r]] = r;
            ans = max(ans, r - l + 1);
        }
        return ans;

        // vector<int> last(256, -1);
        // int left = 0, maxLen = 0;
        // for(int right = 0; right < s.size(); right++) {
        //     unsigned char c = s[right];
        //     if(last[c] >= left) {
        //         left = last[c] + 1;
        //     }
        //     last[c] = right;
        //     maxLen = max(maxLen, right - left + 1);
        // }
        // return maxLen;
    }
};
// @lc code=end

