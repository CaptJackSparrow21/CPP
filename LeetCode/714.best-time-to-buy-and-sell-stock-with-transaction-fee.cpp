/*
 * @lc app=leetcode id=714 lang=cpp
 *
 * [714] Best Time to Buy and Sell Stock with Transaction Fee
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        vector<int> arr = prices;
        int n = arr.size();

        int buy = -arr[0], sell = 0;
        for(int i=1; i<n; i++) {
            int prevBuy = buy, prevSell = sell;
            buy = max(prevBuy, prevSell - arr[i]);
            sell = max(prevSell, prevBuy + arr[i] - fee);
        }
        return sell;
    }
};
// @lc code=end

