//https://takeuforward.org/plus/dsa/problems/coin-change-ii?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n * amount) && SC = O(amount)
class Solution {
public:
    int count(vector<int> &coins, int N, int amount) {
        const int mod = 1e9 + 7;
        vector<int> dp(amount + 1, 0);
        dp[0] = 1;

        for(int i=0; i<N; i++) {
            for(int sum=coins[i]; sum<=amount; sum++)
                dp[sum] = (dp[sum] + dp[sum - coins[i]]) % mod;
        }
        return dp[amount];
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    int amount; cin >> amount;
    
    vector<int> coins;
    string temp;
    for(char c : s) {
        if(c == '-' || isdigit(c)) 
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            coins.push_back(stoll(temp));
            temp = "";
        }
    }

    int N = coins.size();
    Solution sol;
    cout << sol.count(coins, N, amount);

    return 0;
}