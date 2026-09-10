//https://takeuforward.org/plus/dsa/problems/minimum-coins?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n * target) && SC = O(target)
class Solution {
public:
    int MinimumCoins(vector<int> &coins, int amount) {
        vector<int> dp(amount + 1, amount + 1);
        dp[0] = 0;

        for(int i=1; i<=amount; i++) {
            for(int coin : coins) {
                if(coin <= i)
                    dp[i] = min(dp[i], 1 + dp[i - coin]);
            }
        }
        return dp[amount] == amount + 1 ? -1 : dp[amount];
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

    Solution sol;
    cout << sol.MinimumCoins(coins, amount);


    return 0;
}