/*
 * @lc app=leetcode id=3718 lang=cpp
 *
 * [3718] Smallest Missing Multiple of K
 */

// @lc code=start
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> seen(nums.begin(), nums.end());
        int ans = k;

        while(seen.count(ans))
            ans += k;

        return ans;
    }
};
// @lc code=end

