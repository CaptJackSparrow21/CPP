/*
 * @lc app=leetcode id=2472 lang=cpp
 *
 * [2472] Maximum Number of Non-overlapping Palindrome Substrings
 */

// @lc code=start
class Solution {
public:
    int maxPalindromes(string s, int k) {
        int n = s.size(), ans = 0, end = -1;

        for(int i=0; i<n; i++) {
            for(int l : {i - 1, i}) {
                int r = i;
                while(l >= 0 && r < n && s[l] == s[r]) {
                    if(r - l + 1 >= k && l > end) {
                        ans++;
                        end = r;
                        break;
                    }
                    l--; r++;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

