/*
 * @lc app=leetcode id=940 lang=cpp
 *
 * [940] Distinct Subsequences II
 */

// @lc code=start
class Solution {
public:
    int distinctSubseqII(string s) {
        const int MOD = 1e9 + 7;
        vector<long long> ends(26, 0);
        long long total = 0;

        for(char ch : s) {
            int idx = ch - 'a';
            long long new_ends = (total + 1) % MOD;
            total = (total + new_ends - ends[idx] + MOD) % MOD;
            ends[idx] = new_ends;
        }
        return total;
    }
};
// @lc code=end

