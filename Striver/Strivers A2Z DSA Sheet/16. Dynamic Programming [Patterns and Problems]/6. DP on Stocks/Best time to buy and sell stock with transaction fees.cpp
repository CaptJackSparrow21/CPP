//https://takeuforward.org/plus/dsa/problems/best-time-to-buy-and-sell-stock-with-cooldown-and-transaction-fees?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n) && SC = O(1)
class Solution {
public:
    int stockBuySell(vector<int> arr, int n, int fee) {
        int buy = -arr[0];
        int sell = 0;

        for(int i=1; i<n; i++) {
            int prevBuy = buy;
            int prevSell = sell;

            buy = max(prevBuy, prevSell - arr[i]);
            sell = max(prevSell, prevBuy + arr[i] - fee);
        }
        return sell;
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    int fee; cin >> fee;
    vector<int> arr;
    string temp;
    for(char c : s) {
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            arr.push_back(stoll(temp));
            temp = "";
        }
    }

    int n = arr.size();
    Solution sol;
    cout << sol.stockBuySell(arr, n, fee);

    return 0;
}