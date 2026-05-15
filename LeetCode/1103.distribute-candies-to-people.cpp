/*
 * @lc app=leetcode id=1103 lang=cpp
 *
 * [1103] Distribute Candies to People
 */

// @lc code=start
class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people, 0);
        int give = 1, idx = 0;

        while(candies > 0) {
            int curr = min(give, candies);
            ans[idx] += curr;
            candies -= curr;
            give++;
            idx = (idx + 1) % num_people;
        }
        return ans;
    }
};
// @lc code=end

