/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last(256, -1);
        int left = 0, maxLen = 0;
        for(int right = 0; right < s.size(); right++) {
            unsigned char c = s[right];
            if(last[c] >= left) {
                left = last[c] + 1;
            }
            last[c] = right;
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};
// @lc code=end

