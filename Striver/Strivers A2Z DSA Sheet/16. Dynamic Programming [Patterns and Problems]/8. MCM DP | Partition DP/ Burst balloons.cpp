//https://takeuforward.org/practice/dsa/burst-balloons

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n^3) && SC = O(n^2)
class Solution {
public:
    int maxCoins(vector<int> &nums) {
        int n = nums.size();
        nums.insert(nums.begin(), 1);
        nums.push_back(1);

        vector<vector<int>> dp(n + 2, vector<int> (n + 2, 0));

        for(int len=2; len<=n+1; len++) {
            for(int l=0; l+len<n+2; l++) {
                int r = l + len;

                for(int k=l+1; k<r; k++) {
                    dp[l][r] = max(dp[l][r],
                        dp[l][k] + dp[k][r] +
                        nums[l] * nums[k] * nums[r]);
                }
            }
        }

        return dp[0][n+1];
    }
};

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    vector<int> nums;
    string temp;
    for(char c : s) {
        if(c == '-' || isdigit(c))
            temp += c;
        else if((c == ',' || c == ']') && !temp.empty()) {
            nums.push_back(stoll(temp));
            temp = "";
        }
    }

    Solution sol;
    cout << sol.maxCoins(nums);

    return 0;
}