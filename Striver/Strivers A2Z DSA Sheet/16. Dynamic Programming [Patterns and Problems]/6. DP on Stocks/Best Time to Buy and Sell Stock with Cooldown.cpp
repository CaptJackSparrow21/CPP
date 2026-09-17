//https://takeuforward.org/plus/dsa/problems/best-time-to-buy-and-sell-stock-with-cooldown?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n) && SC = O(1)
class Solution {
public:
    int maxProfit(const vector<int> prices) {
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

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    string temp;
    vector<int> prices;
    for(char c : s) {
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            prices.push_back(stoll(temp));
            temp = "";
        }
    }

    Solution sol;
    cout << sol.maxProfit(prices);

    return 0;
}