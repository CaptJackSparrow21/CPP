/*
 * @lc app=leetcode id=3753 lang=cpp
 *
 * [3753] Total Waviness of Numbers in Range II
 */

// @lc code=start
#define ll long long
class Solution {
public:
    long long totalWaviness(long long num1, long long num2) {
        ll count = 0;
        for(ll i=num1; i<=num2; i++) {
            string s = to_string(i);

            for(ll j=1; j<s.size()-1; j++) {
                if((s[j] > s[j-1] && s[j] > s[j+1]) || (s[j] < s[j-1] && s[j] < s[j+1]))
                    count++;
            }
        }
        return count;
    }
};
// @lc code=end

