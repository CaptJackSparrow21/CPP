#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int stockBuySell(vector<int> arr, int n){
        int minPrice  = arr[0];
        int maxProfit = 0;

        for(int i=1; i<arr.size(); i++) {
            if(arr[i] < minPrice) {
                minPrice = arr[i];
            }
            else {
                int profit  = arr[i] - minPrice;
                if(profit > maxProfit) {
                    maxProfit = profit;
                }
            }
        }
        return maxProfit;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int>arr;
    int x; string line;
    getline(cin, line);
    stringstream ss(line);
    while(ss >> x) arr.push_back(x);
    int n; cin >> n;

    Solution s;
    cout << s.stockBuySell(arr, n) << endl;

    return 0;
}