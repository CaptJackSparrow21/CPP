/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> arr = prices;
        int mn = arr[0], profit = 0;
        for(int i=1; i<arr.size(); i++) {
            profit = max(profit, arr[i] - mn);
            mn = min(mn, arr[i]);
        }
        return profit;
    }
};
// @lc code=end

