/*
 * @lc app=leetcode id=309 lang=cpp
 *
 * [309] Best Time to Buy and Sell Stock with Cooldown
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = -prices[0];
        int sell = 0, rest = 0;
        for(int i=1; i<prices.size(); i++) {
            int oldBuy = buy;
            int oldSell = sell;
            int oldRest = rest;

            buy = max(oldBuy, oldRest - prices[i]);
            sell = oldBuy + prices[i];
            rest = max(oldRest, oldSell);
        }
        return max(sell, rest);
    }
};
// @lc code=end

