/*
 * @lc app=leetcode id=1833 lang=cpp
 *
 * [1833] Maximum Ice Cream Bars
 */

// @lc code=start
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        vector<int> freq(100001, 0);

        for(int cost : costs) 
            freq[cost]++;

        int ans = 0;
        for(int cost=1; cost <= 100000; cost++) {
            if(freq[cost] == 0)
                continue;

            int take = min(freq[cost], coins / cost);

            ans += take;
            coins -= take * cost;

            if(coins < cost)
                continue;
        }
        return ans;
    }
};
// @lc code=end

