/*
 * @lc app=leetcode id=123 lang=cpp
 *
 * [123] Best Time to Buy and Sell Stock III
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> arr = prices;
        int n = arr.size();
        int buy1 = -arr[0], buy2 = -arr[0];
        int sell1 = 0, sell2 = 0;

        for(int i=1; i<n; i++) {
            int price = arr[i];
            buy1 = max(buy1, -price);
            sell1 = max(sell1, buy1 + price);
            buy2 = max(buy2, sell1 - price);
            sell2 = max(sell2, buy2 + price);
        }
        return sell2;
    }
};
// @lc code=end

