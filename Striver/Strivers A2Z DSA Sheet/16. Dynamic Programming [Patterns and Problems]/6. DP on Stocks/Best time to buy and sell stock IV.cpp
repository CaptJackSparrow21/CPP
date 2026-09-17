//https://takeuforward.org/plus/dsa/problems/best-time-to-buy-and-sell-stock-iv?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n * k) && SC = O(k)
class Solution {
public:
    int stockBuySell(vector<int> arr, int n, int k) {
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

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    int k; cin >> k;
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
    cout << sol.stockBuySell(arr, n, k);

    return 0;
}