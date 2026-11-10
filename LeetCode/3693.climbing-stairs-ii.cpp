/*
 * @lc app=leetcode id=3693 lang=cpp
 *
 * [3693] Climbing Stairs II
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        costs.insert(costs.begin(), 0);
        int a = costs[n], b = INT_MAX / 2, c = INT_MAX / 2;
        for(int i=n-1; i>=0; i--) {
            int curr = costs[i] + min({a + 1, b + 4, c + 9});
            c = b, b = a, a = curr;
        }
        return a;
    }
};
// @lc code=end

