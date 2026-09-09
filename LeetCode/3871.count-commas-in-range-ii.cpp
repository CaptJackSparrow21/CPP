/*
 * @lc app=leetcode id=3871 lang=cpp
 *
 * [3871] Count Commas in Range II
 */

// @lc code=start
class Solution {
public:
    long long countCommas(long long n) {
        if(n < 1000) return 0;

        long long totalCommas = 0;
        long long start = 1000;
        while(start <= n) {
            totalCommas += n - start + 1;
            start *= 1000;
        }
        return totalCommas;
    }
};
// @lc code=end

