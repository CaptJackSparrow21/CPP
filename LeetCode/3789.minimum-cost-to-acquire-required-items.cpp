/*
 * @lc app=leetcode id=3789 lang=cpp
 *
 * [3789] Minimum Cost to Acquire Required Items
 */

// @lc code=start
class Solution {
public:
#define ll long long
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        ll c1 = cost1, c2 = cost2, cb = costBoth;
        ll n1 = need1, n2 = need2;
        ll pairs = min(n1, n2);
        ll costPairs = pairs * min(cb, c1 + c2);
        ll rem1 = n1 - pairs;
        ll rem2 = n2 - pairs;
        ll costRem = rem1 * min(c1, cb) + rem2 * min(c2, cb);
        return costPairs + costRem;
    }
};
// @lc code=end

