//https://takeuforward.org/practice/dsa/matrix-chain-multiplication

#include<bits/stdc++.h>
using namespace std;
#define int long long

//TC = O(n^3) && SC = O(n^2)
class Solution {
public:
    int matrixMultiplication(vector<int> &nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int> (n, 0));

        for(int len=2; len<n; len++) {
            for(int i=1; i+len-1<n; i++) {
                int j = i + len - 1;
                dp[i][j] = INT_MAX;

                for(int k=i; k<j; k++) {
                    int cost = dp[i][k] + dp[k+1][j]
                        + nums[i-1] * nums[k] * nums[j];

                    dp[i][j] = min(dp[i][j], cost);
                }
            }
        }
        return dp[1][n-1];
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
    cout << sol.matrixMultiplication(nums);

    return 0;
}