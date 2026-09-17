/*
 * @lc app=leetcode id=188 lang=cpp
 *
 * [188] Best Time to Buy and Sell Stock IV
 */

// @lc code=start
class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        vector<int> arr = prices;
        int n = arr.size();
        if(n == 0 || k == 0) return 0;
        vector<int> buy(k + 1, INT_MIN);
        vector<int> sell(k + 1, 0);

        for(int price : arr) {
            for(int t=1; t<=k; t++) {
                buy[t] = max(buy[t], sell[t-1] - price);
                sell[t] = max(sell[t], buy[t] + price);
            }
        }
        return sell[k];
    }
};
// @lc code=end

