/*
 * @lc app=leetcode id=2904 lang=cpp
 *
 * [2904] Shortest and Lexicographically Smallest Beautiful String
 */

// @lc code=start
class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        int left = 0, ones = 0;

        string ans = "";

        for(int right=0; right < n; right++) {
            if(s[right] == '1')
                ones++;

            while(ones > k) {
                if(s[left] == '1')  
                    ones--;

                left++;
            }

            if(ones == k) {
                while(left < right && s[left] == '0')
                    left++;

                string curr = s.substr(left, right - left + 1);

                if(ans == "" ||
                   curr.size() < ans.size() || 
                   (curr.size() == ans.size() && curr < ans))
                        ans = curr;
            }
        }
        return ans;
    }
};
// @lc code=end

