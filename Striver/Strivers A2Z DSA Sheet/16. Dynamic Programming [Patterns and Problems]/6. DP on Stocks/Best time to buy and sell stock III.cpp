//https://takeuforward.org/plus/dsa/problems/best-time-to-buy-and-sell-stock-iii?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n) && SC = O(1)    
class Solution {
public:
    int stockBuySell(vector<int> arr, int n) {
        int buy1 = -arr[0];
        int sell1 = 0;

        int buy2 = -arr[0];
        int sell2 = 0;

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

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
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
    cout << sol.stockBuySell(arr, n);

    return 0;
}