//https://takeuforward.org/plus/dsa/problems/best-time-to-buy-and-sell-stock-ii?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n) && SC = O(1)
class Solution {
public:
    int stockBuySell(vector<int> arr, int n) {
        int ans = 0;
        for(int i=1; i<n; i++) {
            if(arr[i] > arr[i-1])
                ans += arr[i] - arr[i-1];
        }
        return ans;
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