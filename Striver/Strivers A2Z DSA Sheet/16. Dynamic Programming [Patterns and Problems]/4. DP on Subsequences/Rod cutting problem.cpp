//https://takeuforward.org/plus/dsa/problems/rod-cutting-problem?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n^2) && SC = O(n)
class Solution {
public:
    int rodCutting(vector<int> price, int n) {
        vector<int> dp(n + 1, 0);
        for(int length=1; length<=n; length++) {
            for(int cut=1; cut<=length; cut++) {
                int currentValue = price[cut - 1] + dp[length - cut];
                dp[length] = max(dp[length], currentValue);
            }
        }
        return dp[n];
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    int n; cin >> n;
    
    vector<int> price;
    string temp;
    for(char c : s) {
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            price.push_back(stoll(temp));
            temp = "";
        }
    }

    Solution sol;
    cout << sol.rodCutting(price, n);

    return 0;
}