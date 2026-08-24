/*
 * @lc app=leetcode id=1872 lang=cpp
 *
 * [1872] Stone Game VIII
 */

// @lc code=start
class Solution {
public:
    int stoneGameVIII(vector<int>& stones) {
        int n = stones.size();

        for(int i=1; i<n; i++)
            stones[i] += stones[i-1];

        int best = stones[n-1];

        for(int i=n-2; i>=1; i--)
            best = max(best, stones[i] - best);

        return best;
    }
};
// @lc code=end

